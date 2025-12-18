#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlStringAttributeDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlStringAttributeDescription)
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
class UxmlStringAttributeDescription___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStringAttributeDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStringAttributeDescription___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription/<>c
class CORDL_TYPE UxmlStringAttributeDescription___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UxmlStringAttributeDescription___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_3<::StringW, ::StringW, ::StringW>* __9__3_0;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Func_3<::StringW, ::StringW, ::StringW>* __9__4_0;

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription___c* New_ctor();

  /// @brief Method <GetValueFromBag>b__3_0, addr 0x6af2b34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _GetValueFromBag_b__3_0(::StringW s, ::StringW t);

  /// @brief Method <TryGetValueFromBag>b__4_0, addr 0x6af2b3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _TryGetValueFromBag_b__4_0(::StringW s, ::StringW t);

  /// @brief Method .ctor, addr 0x6af2b30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription___c* getStaticF___9();

  static inline ::System::Func_3<::StringW, ::StringW, ::StringW>* getStaticF___9__3_0();

  static inline ::System::Func_3<::StringW, ::StringW, ::StringW>* getStaticF___9__4_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::UxmlStringAttributeDescription___c* value);

  static inline void setStaticF___9__3_0(::System::Func_3<::StringW, ::StringW, ::StringW>* value);

  static inline void setStaticF___9__4_0(::System::Func_3<::StringW, ::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlStringAttributeDescription___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlStringAttributeDescription___c(UxmlStringAttributeDescription___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlStringAttributeDescription___c(UxmlStringAttributeDescription___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStringAttributeDescription___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TypedUxmlAttributeDescription`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlStringAttributeDescription
class CORDL_TYPE UxmlStringAttributeDescription : public ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::StringW> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::UxmlStringAttributeDescription___c;

  /// @brief Method GetValueFromBag, addr 0x6af2798, size 0x198, virtual true, abstract: false, final false
  inline ::StringW GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* New_ctor();

  /// @brief Method TryGetValueFromBag, addr 0x6af2930, size 0x1ac, virtual false, abstract: false, final false
  inline bool TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc, ::ByRef<::StringW> value);

  /// @brief Method .ctor, addr 0x6ae6f74, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlStringAttributeDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlStringAttributeDescription(UxmlStringAttributeDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStringAttributeDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlStringAttributeDescription(UxmlStringAttributeDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStringAttributeDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStringAttributeDescription*, "UnityEngine.UIElements", "UxmlStringAttributeDescription");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStringAttributeDescription___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStringAttributeDescription___c*, "UnityEngine.UIElements", "UxmlStringAttributeDescription/<>c");
