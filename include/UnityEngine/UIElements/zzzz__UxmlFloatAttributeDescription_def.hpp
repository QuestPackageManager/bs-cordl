#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlFloatAttributeDescription.hpp"
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
class UxmlFloatAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlFloatAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlFloatAttributeDescription/<>c
class CORDL_TYPE UxmlFloatAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, float_t, float_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlFloatAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa2e00, size 0x8, virtual false, abstract: false, final false
  inline float_t _GetValueFromBag_b__3_0(::StringW s, float_t f);

  /// @brief Method .ctor, addr 0x4aa2df8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlFloatAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, float_t, float_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlFloatAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, float_t, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlFloatAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlFloatAttributeDescription___c(UxmlFloatAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlFloatAttributeDescription___c(UxmlFloatAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlFloatAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlFloatAttributeDescription
class CORDL_TYPE UxmlFloatAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlFloatAttributeDescription___c;

  /// @brief Method ConvertValueToFloat, addr 0x4aa2d00, size 0x9c, virtual false, abstract: false, final false
  static inline float_t ConvertValueToFloat(::StringW v, float_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa2bb4, size 0x14c, virtual true, abstract: false, final false
  inline float_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlFloatAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4aa2b1c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlFloatAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlFloatAttributeDescription(UxmlFloatAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFloatAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlFloatAttributeDescription(UxmlFloatAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlFloatAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlFloatAttributeDescription___c*, "UnityEngine.UIElements", "UxmlFloatAttributeDescription/<>c");
