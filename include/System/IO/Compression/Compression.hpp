#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System\IO\Compression\CompressionLevel.hpp"
#include "System\IO\Compression\CompressionMode.hpp"
#include "System\IO\Compression\DeflateStream.hpp"
#include "System\IO\Compression\DeflateStreamNative.hpp"
#include "System\IO\Compression\GZipStream.hpp"
#ifdef __cpp_modules
export module Compression;
#endif
