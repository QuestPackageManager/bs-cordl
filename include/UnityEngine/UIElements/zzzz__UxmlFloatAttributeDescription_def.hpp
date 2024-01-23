#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UxmlFloatAttributeDescription)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class __UxmlFloatAttributeDescription____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlFloatAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6985))
// CS Name: ::UxmlFloatAttributeDescription::<>c*
class CORDL_TYPE __UxmlFloatAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_3<::StringW, float_t, float_t>* __9__3_0;

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c* value);

  static inline ::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, float_t, float_t>* value);

  static inline ::System::Func_3<::StringW, float_t, float_t>* getStaticF___9__3_0();

  static inline ::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e0f2c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x2e0f2cc, size 0x8, virtual false, abstract: false, final false
  inline float_t _GetValueFromBag_b__3_0(::StringW s, float_t f);

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlFloatAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlFloatAttributeDescription____c(__UxmlFloatAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlFloatAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlFloatAttributeDescription____c(__UxmlFloatAttributeDescription____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlFloatAttributeDescription____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlFloatAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6982)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 391 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6986))
// CS Name: ::UnityEngine.UIElements::UxmlFloatAttributeDescription*
class CORDL_TYPE UxmlFloatAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c;

  static inline ::UnityEngine::UIElements::UxmlFloatAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2e0efc4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetValueFromBag, addr 0x2e0f060, size 0x164, virtual true, abstract: false, final false
  inline float_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method ConvertValueToFloat, addr 0x2e0f1c4, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ConvertValueToFloat(::StringW v, float_t defaultValue);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlFloatAttributeDescription(UxmlFloatAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlFloatAttributeDescription(UxmlFloatAttributeDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlFloatAttributeDescription();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlFloatAttributeDescription____c*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription/<>c");
