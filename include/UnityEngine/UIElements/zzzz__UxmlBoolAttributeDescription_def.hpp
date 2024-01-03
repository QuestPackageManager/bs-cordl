#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlBoolAttributeDescription)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class __UxmlBoolAttributeDescription____c;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class __UxmlBoolAttributeDescription____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlBoolAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6991))
// CS Name: ::UxmlBoolAttributeDescription::<>c*
class CORDL_TYPE __UxmlBoolAttributeDescription____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_3<::StringW, bool, bool>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Func_3<::StringW, bool, bool>* __9__4_0;

  static inline void setStaticF___9(::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c* value);

  static inline ::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c* getStaticF___9();

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, bool, bool>* value);

  static inline ::System::Func_3<::StringW, bool, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9__4_0(::System::Func_3<::StringW, bool, bool>* value);

  static inline ::System::Func_3<::StringW, bool, bool>* getStaticF___9__4_0();

  static inline ::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c* New_ctor();

  /// @brief Method .ctor, addr 0x2e0fec4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x2e0fecc, size 0x10, virtual false, abstract: false, final false
  inline bool _GetValueFromBag_b__3_0(::StringW s, bool b);

  /// @brief Method <TryGetValueFromBag>b__4_0, addr 0x2e0fedc, size 0x10, virtual false, abstract: false, final false
  inline bool _TryGetValueFromBag_b__4_0(::StringW s, bool b);

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlBoolAttributeDescription____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UxmlBoolAttributeDescription____c(__UxmlBoolAttributeDescription____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UxmlBoolAttributeDescription____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UxmlBoolAttributeDescription____c(__UxmlBoolAttributeDescription____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UxmlBoolAttributeDescription____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::UxmlBoolAttributeDescription
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6982)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6982), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6992))
// CS Name: ::UnityEngine.UIElements::UxmlBoolAttributeDescription*
class CORDL_TYPE UxmlBoolAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c;

  static inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x2e0fa5c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GetValueFromBag, addr 0x2e0faf8, size 0x168, virtual true, abstract: false, final false
  inline bool GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method TryGetValueFromBag, addr 0x2e0fc60, size 0x178, virtual false, abstract: false, final false
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ByRef<bool> value);

  /// @brief Method ConvertValueToBool, addr 0x2e0fdd8, size 0x88, virtual false, abstract: false, final false
  static inline bool ConvertValueToBool(::StringW v, bool defaultValue);

  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlBoolAttributeDescription(UxmlBoolAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlBoolAttributeDescription(UxmlBoolAttributeDescription const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlBoolAttributeDescription();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlBoolAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "UnityEngine.UIElements", "UxmlBoolAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__UxmlBoolAttributeDescription____c*, "UnityEngine.UIElements", "UxmlBoolAttributeDescription/<>c");
