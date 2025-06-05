#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/JZlib.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JZlib)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class JZlib;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::JZlib);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.JZlib
class CORDL_TYPE JZlib : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::Zlib::JZlib* New_ctor();

  /// @brief Method .ctor, addr 0x25e2b78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method version, addr 0x25e2b38, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JZlib();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JZlib", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JZlib(JZlib&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JZlib", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JZlib(JZlib const&) = delete;

  /// @brief Field Z_BEST_COMPRESSION offset 0xffffffff size 0x4
  static constexpr int32_t Z_BEST_COMPRESSION{ static_cast<int32_t>(0x9) };

  /// @brief Field Z_BEST_SPEED offset 0xffffffff size 0x4
  static constexpr int32_t Z_BEST_SPEED{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_DEFAULT_COMPRESSION offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFAULT_COMPRESSION{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_DEFAULT_STRATEGY offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFAULT_STRATEGY{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_FILTERED offset 0xffffffff size 0x4
  static constexpr int32_t Z_FILTERED{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_FINISH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FINISH{ static_cast<int32_t>(0x4) };

  /// @brief Field Z_FULL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FULL_FLUSH{ static_cast<int32_t>(0x3) };

  /// @brief Field Z_HUFFMAN_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t Z_HUFFMAN_ONLY{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_NO_COMPRESSION offset 0xffffffff size 0x4
  static constexpr int32_t Z_NO_COMPRESSION{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_NO_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_NO_FLUSH{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_PARTIAL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_PARTIAL_FLUSH{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_SYNC_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_SYNC_FLUSH{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_VERSION_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_VERSION_ERROR{ static_cast<int32_t>(0xfffffffa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1824 };

  /// @brief Field _version offset 0xffffffff size 0x8
  static constexpr ::ConstString _version{ u"1.0.7" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::JZlib, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::JZlib);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::JZlib*, "Org.BouncyCastle.Utilities.Zlib", "JZlib");
