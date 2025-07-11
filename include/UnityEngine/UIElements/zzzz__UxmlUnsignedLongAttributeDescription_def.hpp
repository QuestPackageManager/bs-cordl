#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUnsignedLongAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlUnsignedLongAttributeDescription)
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
class UxmlUnsignedLongAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlUnsignedLongAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlUnsignedLongAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlUnsignedLongAttributeDescription/<>c
class CORDL_TYPE UxmlUnsignedLongAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, uint64_t, uint64_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa3738, size 0x40, virtual false, abstract: false, final false
  inline uint64_t _GetValueFromBag_b__3_0(::StringW s, uint64_t l);

  /// @brief Method .ctor, addr 0x4aa3730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, uint64_t, uint64_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, uint64_t, uint64_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlUnsignedLongAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlUnsignedLongAttributeDescription___c(UxmlUnsignedLongAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlUnsignedLongAttributeDescription___c(UxmlUnsignedLongAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlUnsignedLongAttributeDescription
class CORDL_TYPE UxmlUnsignedLongAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<uint64_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c;

  /// @brief Method ConvertValueToUlong, addr 0x4aa3698, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t ConvertValueToUlong(::StringW v, uint64_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa354c, size 0x14c, virtual true, abstract: false, final false
  inline uint64_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4aa34b4, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlUnsignedLongAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlUnsignedLongAttributeDescription(UxmlUnsignedLongAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedLongAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlUnsignedLongAttributeDescription(UxmlUnsignedLongAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription*, "UnityEngine.UIElements", "UxmlUnsignedLongAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedLongAttributeDescription___c*, "UnityEngine.UIElements", "UxmlUnsignedLongAttributeDescription/<>c");
