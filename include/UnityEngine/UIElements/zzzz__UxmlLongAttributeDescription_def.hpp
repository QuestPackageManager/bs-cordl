#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlLongAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlLongAttributeDescription)
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
class UxmlLongAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlLongAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlLongAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlLongAttributeDescription/<>c
class CORDL_TYPE UxmlLongAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlLongAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, int64_t, int64_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlLongAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa12b0, size 0x40, virtual false, abstract: false, final false
  inline int64_t _GetValueFromBag_b__3_0(::StringW s, int64_t l);

  /// @brief Method .ctor, addr 0x4aa12a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlLongAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, int64_t, int64_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlLongAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, int64_t, int64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlLongAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlLongAttributeDescription___c(UxmlLongAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlLongAttributeDescription___c(UxmlLongAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6254 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlLongAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlLongAttributeDescription
class CORDL_TYPE UxmlLongAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlLongAttributeDescription___c;

  /// @brief Method ConvertValueToLong, addr 0x4aa1210, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t ConvertValueToLong(::StringW v, int64_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa10c4, size 0x14c, virtual true, abstract: false, final false
  inline int64_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlLongAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4aa102c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlLongAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlLongAttributeDescription(UxmlLongAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlLongAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlLongAttributeDescription(UxmlLongAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlLongAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlLongAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlLongAttributeDescription*, "UnityEngine.UIElements", "UxmlLongAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlLongAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlLongAttributeDescription___c*, "UnityEngine.UIElements", "UxmlLongAttributeDescription/<>c");
