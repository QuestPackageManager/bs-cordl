#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MeansImplicitUseAttribute)
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
// Forward declare root types
namespace JetBrains::Annotations {
class MeansImplicitUseAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::MeansImplicitUseAttribute);
// Type: JetBrains.Annotations::MeansImplicitUseAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15750)), TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(15751))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15749))
// CS Name: ::JetBrains.Annotations::MeansImplicitUseAttribute*
class CORDL_TYPE MeansImplicitUseAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <UseKindFlags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__UseKindFlags_k__BackingField, put = __set__UseKindFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseKindFlags _UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__TargetFlags_k__BackingField, put = __set__TargetFlags_k__BackingField))::JetBrains::Annotations::ImplicitUseTargetFlags _TargetFlags_k__BackingField;

  __declspec(property(get = get_UseKindFlags, put = set_UseKindFlags))::JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;

  __declspec(property(get = get_TargetFlags, put = set_TargetFlags))::JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& __get__UseKindFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& __get__UseKindFlags_k__BackingField() const;

  constexpr void __set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value);

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& __get__TargetFlags_k__BackingField();

  constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& __get__TargetFlags_k__BackingField() const;

  constexpr void __set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  static inline ::JetBrains::Annotations::MeansImplicitUseAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2eba214 size 0x24 virtual false final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  /// @brief Method .ctor addr 0x2eba264 size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags);

  static inline ::JetBrains::Annotations::MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor addr 0x2eba290 size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  static inline ::JetBrains::Annotations::MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags,
                                                                              ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method .ctor addr 0x2eba238 size 0x2c virtual false final false
  inline void _ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);

  /// @brief Method get_UseKindFlags addr 0x2eba2bc size 0x8 virtual false final false
  inline ::JetBrains::Annotations::ImplicitUseKindFlags get_UseKindFlags();

  /// @brief Method set_UseKindFlags addr 0x2eba2c4 size 0x8 virtual false final false
  inline void set_UseKindFlags(::JetBrains::Annotations::ImplicitUseKindFlags value);

  /// @brief Method get_TargetFlags addr 0x2eba2cc size 0x8 virtual false final false
  inline ::JetBrains::Annotations::ImplicitUseTargetFlags get_TargetFlags();

  /// @brief Method set_TargetFlags addr 0x2eba2d4 size 0x8 virtual false final false
  inline void set_TargetFlags(::JetBrains::Annotations::ImplicitUseTargetFlags value);

  // Ctor Parameters [CppParam { name: "", ty: "MeansImplicitUseAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeansImplicitUseAttribute(MeansImplicitUseAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeansImplicitUseAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeansImplicitUseAttribute(MeansImplicitUseAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeansImplicitUseAttribute();

public:
  /// @brief Field <UseKindFlags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseKindFlags ____UseKindFlags_k__BackingField;

  /// @brief Field <TargetFlags>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::JetBrains::Annotations::ImplicitUseTargetFlags ____TargetFlags_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::MeansImplicitUseAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::MeansImplicitUseAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MeansImplicitUseAttribute*, "JetBrains.Annotations", "MeansImplicitUseAttribute");
