#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Utilities\Zlib\Adler32.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\Deflate.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\InfBlocks.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\InfCodes.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\InfTree.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\Inflate.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\JZlib.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\StaticTree.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\Tree.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\ZDeflaterOutputStream.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\ZInflaterInputStream.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\ZInputStream.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\ZOutputStream.hpp"
#include "Org\BouncyCastle\Utilities\Zlib\ZStream.hpp"
#ifdef __cpp_modules
export module Zlib;
#endif
