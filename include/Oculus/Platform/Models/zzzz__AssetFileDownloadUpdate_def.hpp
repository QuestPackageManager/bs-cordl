#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadUpdate)
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13422))
// CS Name: ::Oculus.Platform.Models::AssetFileDownloadUpdate*
class CORDL_TYPE AssetFileDownloadUpdate : public ::System::Object {
public:
  // Declarations
  /// @brief Field AssetFileId, offset 0x10, size 0x8
  __declspec(property(get = __get_AssetFileId, put = __set_AssetFileId)) uint64_t AssetFileId;

  /// @brief Field AssetId, offset 0x18, size 0x8
  __declspec(property(get = __get_AssetId, put = __set_AssetId)) uint64_t AssetId;

  /// @brief Field BytesTotal, offset 0x20, size 0x8
  __declspec(property(get = __get_BytesTotal, put = __set_BytesTotal)) uint64_t BytesTotal;

  /// @brief Field BytesTransferred, offset 0x28, size 0x8
  __declspec(property(get = __get_BytesTransferred, put = __set_BytesTransferred)) int64_t BytesTransferred;

  /// @brief Field Completed, offset 0x30, size 0x1
  __declspec(property(get = __get_Completed, put = __set_Completed)) bool Completed;

  constexpr uint64_t& __get_AssetFileId();

  constexpr uint64_t const& __get_AssetFileId() const;

  constexpr void __set_AssetFileId(uint64_t value);

  constexpr uint64_t& __get_AssetId();

  constexpr uint64_t const& __get_AssetId() const;

  constexpr void __set_AssetId(uint64_t value);

  constexpr uint64_t& __get_BytesTotal();

  constexpr uint64_t const& __get_BytesTotal() const;

  constexpr void __set_BytesTotal(uint64_t value);

  constexpr int64_t& __get_BytesTransferred();

  constexpr int64_t const& __get_BytesTransferred() const;

  constexpr void __set_BytesTransferred(int64_t value);

  constexpr bool& __get_Completed();

  constexpr bool const& __get_Completed() const;

  constexpr void __set_Completed(bool value);

  static inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2704ba4 size 0xbc virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetFileDownloadUpdate(AssetFileDownloadUpdate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetFileDownloadUpdate(AssetFileDownloadUpdate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetFileDownloadUpdate();

public:
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

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadUpdate*, "Oculus.Platform.Models", "AssetFileDownloadUpdate");
