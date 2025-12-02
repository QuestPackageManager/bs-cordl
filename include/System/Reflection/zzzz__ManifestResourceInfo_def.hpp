#pragma once
// IWYU pragma private; include "System/Reflection/ManifestResourceInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ResourceLocation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ManifestResourceInfo)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct ResourceLocation;
}
// Forward declare root types
namespace System::Reflection {
class ManifestResourceInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ManifestResourceInfo);
// Dependencies System.Object, System.Reflection.ResourceLocation
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.ManifestResourceInfo
class CORDL_TYPE ManifestResourceInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FileName)) ::StringW FileName;

  __declspec(property(get = get_ReferencedAssembly)) ::System::Reflection::Assembly* ReferencedAssembly;

  __declspec(property(get = get_ResourceLocation)) ::System::Reflection::ResourceLocation ResourceLocation;

  /// @brief Field <FileName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FileName_k__BackingField, put = __cordl_internal_set__FileName_k__BackingField)) ::StringW _FileName_k__BackingField;

  /// @brief Field <ReferencedAssembly>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ReferencedAssembly_k__BackingField,
                      put = __cordl_internal_set__ReferencedAssembly_k__BackingField)) ::System::Reflection::Assembly* _ReferencedAssembly_k__BackingField;

  /// @brief Field <ResourceLocation>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__ResourceLocation_k__BackingField,
                      put = __cordl_internal_set__ResourceLocation_k__BackingField)) ::System::Reflection::ResourceLocation _ResourceLocation_k__BackingField;

  static inline ::System::Reflection::ManifestResourceInfo* New_ctor(::System::Reflection::Assembly* containingAssembly, ::StringW containingFileName,
                                                                     ::System::Reflection::ResourceLocation resourceLocation);

  constexpr ::StringW const& __cordl_internal_get__FileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FileName_k__BackingField();

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get__ReferencedAssembly_k__BackingField() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get__ReferencedAssembly_k__BackingField();

  constexpr ::System::Reflection::ResourceLocation const& __cordl_internal_get__ResourceLocation_k__BackingField() const;

  constexpr ::System::Reflection::ResourceLocation& __cordl_internal_get__ResourceLocation_k__BackingField();

  constexpr void __cordl_internal_set__FileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReferencedAssembly_k__BackingField(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set__ResourceLocation_k__BackingField(::System::Reflection::ResourceLocation value);

  /// @brief Method .ctor, addr 0x5968578, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::Assembly* containingAssembly, ::StringW containingFileName, ::System::Reflection::ResourceLocation resourceLocation);

  /// @brief Method get_FileName, addr 0x596858c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_FileName();

  /// @brief Method get_ReferencedAssembly, addr 0x5968584, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_ReferencedAssembly();

  /// @brief Method get_ResourceLocation, addr 0x5968594, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::ResourceLocation get_ResourceLocation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManifestResourceInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManifestResourceInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManifestResourceInfo(ManifestResourceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManifestResourceInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManifestResourceInfo(ManifestResourceInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3496 };

  /// @brief Field <ReferencedAssembly>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____ReferencedAssembly_k__BackingField;

  /// @brief Field <FileName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____FileName_k__BackingField;

  /// @brief Field <ResourceLocation>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::System::Reflection::ResourceLocation ____ResourceLocation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ManifestResourceInfo, ____ReferencedAssembly_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ManifestResourceInfo, ____FileName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ManifestResourceInfo, ____ResourceLocation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::ManifestResourceInfo, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ManifestResourceInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ManifestResourceInfo*, "System.Reflection", "ManifestResourceInfo");
