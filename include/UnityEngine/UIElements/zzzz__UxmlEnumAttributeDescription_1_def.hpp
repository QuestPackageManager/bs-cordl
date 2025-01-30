#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlEnumAttributeDescription_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlEnumAttributeDescription_1)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlEnumAttributeDescription`1/<>c<T>
class CORDL_TYPE UxmlEnumAttributeDescription_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c<T>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, T, T>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_3<::StringW, T, T>* __9__4_0;

  static inline ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c<T>* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _GetValueFromBag_b__3_0(::StringW s, T convertible);

  /// @brief Method <TryGetValueFromBag>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _TryGetValueFromBag_b__4_0(::StringW s, T convertible);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c<T>* getStaticF___9();

  static inline ::System::Func_3<::StringW, T, T>* getStaticF___9__3_0();

  static inline ::System::Func_3<::StringW, T, T>* getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c<T>* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, T, T>* value);

  static inline void setStaticF___9__4_0(::System::Func_3<::StringW, T, T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlEnumAttributeDescription_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlEnumAttributeDescription_1___c(UxmlEnumAttributeDescription_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlEnumAttributeDescription_1___c(UxmlEnumAttributeDescription_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlEnumAttributeDescription`1<T>
class CORDL_TYPE UxmlEnumAttributeDescription_1 : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c<T>;

  /// @brief Method ConvertValueToEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename U> static inline U ConvertValueToEnum(::StringW v, U defaultValue);

  /// @brief Method GetEnumNameErrorMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW GetEnumNameErrorMessage(::StringW v, ::System::Type* enumType);

  /// @brief Method GetEnumRangeErrorMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW GetEnumRangeErrorMessage(::StringW v, ::System::Type* enumType);

  /// @brief Method GetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<T>* New_ctor();

  /// @brief Method TryGetValueFromBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::ByRef<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlEnumAttributeDescription_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlEnumAttributeDescription_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlEnumAttributeDescription_1(UxmlEnumAttributeDescription_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1___c, "UnityEngine.UIElements", "UxmlEnumAttributeDescription`1/<>c");
