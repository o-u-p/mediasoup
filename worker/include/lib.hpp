#include "common.hpp"

extern "C" int run_worker(
  int argc,
  char* argv[],
  const char* version,
  int consumerChannelFd,
  int producerChannelFd,
  int payloadConsumeChannelFd,
  int payloadProduceChannelFd,
  ChannelReadFn channelReadFn,
  ChannelReadCtx channelReadCtx,
  ChannelWriteFn channelWriteFn,
  ChannelWriteCtx channelWriteCtx,
  PayloadChannelReadFn payloadChannelReadFn,
  PayloadChannelReadCtx payloadChannelReadCtx,
  PayloadChannelWriteFn payloadChannelWriteFn,
  PayloadChannelWriteCtx payloadChannelWriteCtx);
