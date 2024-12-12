#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlIntAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlIntAttributeDescription)
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
class UxmlIntAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlIntAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlIntAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlIntAttributeDescription/<>c
class CORDL_TYPE UxmlIntAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlIntAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, int32_t, int32_t>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_3<::StringW, int32_t, int32_t>* __9__4_0;

  static inline ::UnityEngine::UIElements::UxmlIntAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa0a24, size 0x40, virtual false, abstract: false, final false
  inline int32_t _GetValueFromBag_b__3_0(::StringW s, int32_t i);

  /// @brief Method <TryGetValueFromBag>b__4_0, addr 0x4aa0a64, size 0x40, virtual false, abstract: false, final false
  inline int32_t _TryGetValueFromBag_b__4_0(::StringW s, int32_t i);

  /// @brief Method .ctor, addr 0x4aa0a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlIntAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, int32_t, int32_t>* getStaticF___9__3_0();

  static inline ::System::Func_3<::StringW, int32_t, int32_t>* getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlIntAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, int32_t, int32_t>* value);

  static inline void setStaticF___9__4_0(::System::Func_3<::StringW, int32_t, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlIntAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlIntAttributeDescription___c(UxmlIntAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlIntAttributeDescription___c(UxmlIntAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlIntAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlIntAttributeDescription
class CORDL_TYPE UxmlIntAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlIntAttributeDescription___c;

  /// @brief Method ConvertValueToInt, addr 0x4aa0984, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ConvertValueToInt(::StringW v, int32_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa06d8, size 0x14c, virtual true, abstract: false, final false
  inline int32_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlIntAttributeDescription* New_ctor();

  /// @brief Method TryGetValueFromBag, addr 0x4aa0824, size 0x160, virtual false, abstract: false, final false
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::ByRef<int32_t> value);

  /// @brief Method .ctor, addr 0x4aa0640, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlIntAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlIntAttributeDescription(UxmlIntAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlIntAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlIntAttributeDescription(UxmlIntAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlIntAttributeDescription*, "UnityEngine.UIElements", "UxmlIntAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlIntAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlIntAttributeDescription___c*, "UnityEngine.UIElements", "UxmlIntAttributeDescription/<>c");
