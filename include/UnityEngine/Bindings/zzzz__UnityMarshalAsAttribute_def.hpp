#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/UnityMarshalAsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__NativeType_def.hpp"
CORDL_MODULE_EXPORT(UnityMarshalAsAttribute)
namespace UnityEngine::Bindings {
struct NativeType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class UnityMarshalAsAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Bindings::UnityMarshalAsAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::UnityMarshalAsAttribute*, "UnityEngine.Bindings", "UnityMarshalAsAttribute");
// [AttributeUsage((System.AttributeTargets)10508, AllowMultiple = false, Inherited = false)]
// [VisibleToOtherModules]
// Dependencies System.Attribute, UnityEngine.Bindings.NativeType
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.UnityMarshalAsAttribute
class CORDL_TYPE UnityMarshalAsAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <NativeType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__NativeType_k__BackingField, put = __cordl_internal_set__NativeType_k__BackingField)) ::UnityEngine::Bindings::NativeType _NativeType_k__BackingField;

  static inline ::UnityEngine::Bindings::UnityMarshalAsAttribute* New_ctor(::UnityEngine::Bindings::NativeType nativeType);

  constexpr ::UnityEngine::Bindings::NativeType const& __cordl_internal_get__NativeType_k__BackingField() const;

  constexpr ::UnityEngine::Bindings::NativeType& __cordl_internal_get__NativeType_k__BackingField();

  constexpr void __cordl_internal_set__NativeType_k__BackingField(::UnityEngine::Bindings::NativeType value);

  /// @brief Method .ctor, addr 0x701509c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Bindings::NativeType nativeType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityMarshalAsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityMarshalAsAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityMarshalAsAttribute(UnityMarshalAsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityMarshalAsAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityMarshalAsAttribute(UnityMarshalAsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23548 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <NativeType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Bindings::NativeType ____NativeType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::UnityMarshalAsAttribute, ____NativeType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Bindings::UnityMarshalAsAttribute) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Bindings
