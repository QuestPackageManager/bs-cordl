#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDownloadUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadUpdate)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDownloadUpdate);
// Type: Oculus.Platform.Models::AssetFileDownloadUpdate
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AssetFileDownloadUpdate*
class CORDL_TYPE AssetFileDownloadUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetFileId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetFileId, put = __cordl_internal_set_AssetFileId)) uint64_t AssetFileId;

  /// @brief Field AssetId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AssetId, put = __cordl_internal_set_AssetId)) uint64_t AssetId;

  /// @brief Field BytesTotal, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_BytesTotal, put = __cordl_internal_set_BytesTotal)) uint64_t BytesTotal;

  /// @brief Field BytesTransferred, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_BytesTransferred, put = __cordl_internal_set_BytesTransferred)) int64_t BytesTransferred;

  /// @brief Field Completed, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_Completed, put = __cordl_internal_set_Completed)) bool Completed;

  static inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* New_ctor(::System::IntPtr o);

  constexpr uint64_t const& __cordl_internal_get_AssetFileId() const;

  constexpr uint64_t& __cordl_internal_get_AssetFileId();

  constexpr uint64_t const& __cordl_internal_get_AssetId() const;

  constexpr uint64_t& __cordl_internal_get_AssetId();

  constexpr uint64_t const& __cordl_internal_get_BytesTotal() const;

  constexpr uint64_t& __cordl_internal_get_BytesTotal();

  constexpr int64_t const& __cordl_internal_get_BytesTransferred() const;

  constexpr int64_t& __cordl_internal_get_BytesTransferred();

  constexpr bool const& __cordl_internal_get_Completed() const;

  constexpr bool& __cordl_internal_get_Completed();

  constexpr void __cordl_internal_set_AssetFileId(uint64_t value);

  constexpr void __cordl_internal_set_AssetId(uint64_t value);

  constexpr void __cordl_internal_set_BytesTotal(uint64_t value);

  constexpr void __cordl_internal_set_BytesTransferred(int64_t value);

  constexpr void __cordl_internal_set_Completed(bool value);

  /// @brief Method .ctor, addr 0x2afb3e4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileDownloadUpdate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileDownloadUpdate(AssetFileDownloadUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileDownloadUpdate(AssetFileDownloadUpdate const&) = delete;

  /// @brief Field AssetFileId, offset: 0x10, size: 0x8, def value: None
  uint64_t ___AssetFileId;

  /// @brief Field AssetId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___AssetId;

  /// @brief Field BytesTotal, offset: 0x20, size: 0x8, def value: None
  uint64_t ___BytesTotal;

  /// @brief Field BytesTransferred, offset: 0x28, size: 0x8, def value: None
  int64_t ___BytesTransferred;

  /// @brief Field Completed, offset: 0x30, size: 0x1, def value: None
  bool ___Completed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDownloadUpdate, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadUpdate, ___AssetFileId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadUpdate, ___AssetId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadUpdate, ___BytesTotal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadUpdate, ___BytesTransferred) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AssetFileDownloadUpdate, ___Completed) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadUpdate*, "Oculus.Platform.Models", "AssetFileDownloadUpdate");
