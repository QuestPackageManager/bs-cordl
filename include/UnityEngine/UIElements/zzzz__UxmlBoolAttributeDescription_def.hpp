#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlBoolAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlBoolAttributeDescription)
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
class UxmlBoolAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlBoolAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlBoolAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlBoolAttributeDescription/<>c
class CORDL_TYPE UxmlBoolAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, bool, bool>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa4790, size 0x10, virtual false, abstract: false, final false
  inline bool _GetValueFromBag_b__3_0(::StringW s, bool b);

  /// @brief Method .ctor, addr 0x4aa4788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, bool, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlBoolAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, bool, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlBoolAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlBoolAttributeDescription___c(UxmlBoolAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlBoolAttributeDescription___c(UxmlBoolAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlBoolAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlBoolAttributeDescription
class CORDL_TYPE UxmlBoolAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlBoolAttributeDescription___c;

  /// @brief Method ConvertValueToBool, addr 0x4aa46a4, size 0x88, virtual false, abstract: false, final false
  static inline bool ConvertValueToBool(::StringW v, bool defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa4554, size 0x150, virtual true, abstract: false, final false
  inline bool GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4a9b7d4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlBoolAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlBoolAttributeDescription(UxmlBoolAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlBoolAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlBoolAttributeDescription(UxmlBoolAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlBoolAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "UnityEngine.UIElements", "UxmlBoolAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlBoolAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlBoolAttributeDescription___c*, "UnityEngine.UIElements", "UxmlBoolAttributeDescription/<>c");
