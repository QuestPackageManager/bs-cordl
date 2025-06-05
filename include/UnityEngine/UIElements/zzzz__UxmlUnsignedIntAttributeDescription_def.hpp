#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlUnsignedIntAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlUnsignedIntAttributeDescription)
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
class UxmlUnsignedIntAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlUnsignedIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlUnsignedIntAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlUnsignedIntAttributeDescription/<>c
class CORDL_TYPE UxmlUnsignedIntAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, uint32_t, uint32_t>* __9__3_0;

  static inline ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x4aa37dc, size 0x40, virtual false, abstract: false, final false
  inline uint32_t _GetValueFromBag_b__3_0(::StringW s, uint32_t i);

  /// @brief Method .ctor, addr 0x4aa37d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, uint32_t, uint32_t>* getStaticF___9__3_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, uint32_t, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlUnsignedIntAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlUnsignedIntAttributeDescription___c(UxmlUnsignedIntAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlUnsignedIntAttributeDescription___c(UxmlUnsignedIntAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlUnsignedIntAttributeDescription
class CORDL_TYPE UxmlUnsignedIntAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<uint32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c;

  /// @brief Method ConvertValueToUInt, addr 0x4aa373c, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t ConvertValueToUInt(::StringW v, uint32_t defaultValue);

  /// @brief Method GetValueFromBag, addr 0x4aa35f0, size 0x14c, virtual true, abstract: false, final false
  inline uint32_t GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription* New_ctor();

  /// @brief Method .ctor, addr 0x4aa3558, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlUnsignedIntAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlUnsignedIntAttributeDescription(UxmlUnsignedIntAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlUnsignedIntAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlUnsignedIntAttributeDescription(UxmlUnsignedIntAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription*, "UnityEngine.UIElements", "UxmlUnsignedIntAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlUnsignedIntAttributeDescription___c*, "UnityEngine.UIElements", "UxmlUnsignedIntAttributeDescription/<>c");
