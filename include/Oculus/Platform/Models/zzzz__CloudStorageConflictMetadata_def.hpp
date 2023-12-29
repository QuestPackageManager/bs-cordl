#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CloudStorageConflictMetadata)
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CloudStorageConflictMetadata);
// Type: Oculus.Platform.Models::CloudStorageConflictMetadata
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13471))
// CS Name: ::Oculus.Platform.Models::CloudStorageConflictMetadata*
class CORDL_TYPE CloudStorageConflictMetadata : public ::System::Object {
public:
  // Declarations
  /// @brief Field Local, offset 0x10, size 0x8
  __declspec(property(get = __get_Local, put = __set_Local))::Oculus::Platform::Models::CloudStorageMetadata* Local;

  /// @brief Field Remote, offset 0x18, size 0x8
  __declspec(property(get = __get_Remote, put = __set_Remote))::Oculus::Platform::Models::CloudStorageMetadata* Remote;

  constexpr ::Oculus::Platform::Models::CloudStorageMetadata*& __get_Local();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::CloudStorageMetadata*> const& __get_Local() const;

  constexpr void __set_Local(::Oculus::Platform::Models::CloudStorageMetadata* value);

  constexpr ::Oculus::Platform::Models::CloudStorageMetadata*& __get_Remote();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::CloudStorageMetadata*> const& __get_Remote() const;

  constexpr void __set_Remote(::Oculus::Platform::Models::CloudStorageMetadata* value);

  static inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b2c44 size 0xe0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageConflictMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudStorageConflictMetadata(CloudStorageConflictMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudStorageConflictMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudStorageConflictMetadata(CloudStorageConflictMetadata const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudStorageConflictMetadata();

public:
  /// @brief Field Local, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::CloudStorageMetadata* ___Local;

  /// @brief Field Remote, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::CloudStorageMetadata* ___Remote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CloudStorageConflictMetadata, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageConflictMetadata, ___Local) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CloudStorageConflictMetadata, ___Remote) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageConflictMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageConflictMetadata*, "Oculus.Platform.Models", "CloudStorageConflictMetadata");
