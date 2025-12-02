#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlDoubleAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UxmlDoubleAttributeDescription)
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
class UxmlDoubleAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlDoubleAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlDoubleAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlDoubleAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlDoubleAttributeDescription/<>c
class CORDL_TYPE UxmlDoubleAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, double_t, double_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x6a8a314, size 0x8, virtual false, abstract: false, final false
  inline double_t _GetValueFromBag_b__3_0(::StringW s, double_t d);

  /// @brief Method .ctor, addr 0x6a8a310, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, double_t, double_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, double_t, double_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlDoubleAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlDoubleAttributeDescription___c(UxmlDoubleAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlDoubleAttributeDescription___c(UxmlDoubleAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlDoubleAttributeDescription
class CORDL_TYPE UxmlDoubleAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<double_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c;

  /// @brief Method ConvertValueToDouble, addr 0x6a8a224, size 0x98, virtual false, abstract: false, final false
  static inline double_t ConvertValueToDouble(::StringW v, double_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x6a8a08c, size 0x198, virtual true, abstract: false, final false
  inline double_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlDoubleAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x6a89ff0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlDoubleAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlDoubleAttributeDescription(UxmlDoubleAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlDoubleAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlDoubleAttributeDescription(UxmlDoubleAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlDoubleAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlDoubleAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlDoubleAttributeDescription*, "UnityEngine.UIElements", "UxmlDoubleAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlDoubleAttributeDescription___c*, "UnityEngine.UIElements", "UxmlDoubleAttributeDescription/<>c");
