#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataBindingUtility)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements::Internal {
class AutoCompletePathVisitor;
}
namespace UnityEngine::UIElements::Internal {
class TypePathVisitor;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct BindingInfo;
}
namespace UnityEngine::UIElements {
class DataBindingUtility___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DataBindingUtility;
}
namespace UnityEngine::UIElements {
class DataBindingUtility___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DataBindingUtility);
MARK_REF_PTR_T(::UnityEngine::UIElements::DataBindingUtility___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingUtility/<>c
class CORDL_TYPE DataBindingUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::DataBindingUtility___c* __9;

  static inline ::UnityEngine::UIElements::DataBindingUtility___c* New_ctor();

  /// @brief Method <.cctor>b__23_0, addr 0x6a79a10, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::TypePathVisitor* __cctor_b__23_0();

  /// @brief Method <.cctor>b__23_1, addr 0x6a79a54, size 0x28, virtual false, abstract: false, final false
  inline void __cctor_b__23_1(::UnityEngine::UIElements::Internal::TypePathVisitor* v);

  /// @brief Method <.cctor>b__23_2, addr 0x6a79a7c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* __cctor_b__23_2();

  /// @brief Method <.cctor>b__23_3, addr 0x6a79ad4, size 0x18, virtual false, abstract: false, final false
  inline void __cctor_b__23_3(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* v);

  /// @brief Method .ctor, addr 0x6a79a0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::DataBindingUtility___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::DataBindingUtility___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingUtility___c(DataBindingUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingUtility___c(DataBindingUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4053 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DataBindingUtility___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBindingUtility
class CORDL_TYPE DataBindingUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::DataBindingUtility___c;

  /// @brief Field k_AutoCompleteVisitors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AutoCompleteVisitors,
                      put = setStaticF_k_AutoCompleteVisitors)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>* k_AutoCompleteVisitors;

  /// @brief Field k_TypeVisitors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_TypeVisitors, put = setStaticF_k_TypeVisitors)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>* k_TypeVisitors;

  /// @brief Field s_ReplaceIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReplaceIndices, put = setStaticF_s_ReplaceIndices)) ::System::Text::RegularExpressions::Regex* s_ReplaceIndices;

  /// @brief Method TryGetBinding, addr 0x6a79524, size 0x184, virtual false, abstract: false, final false
  static inline bool TryGetBinding(::UnityEngine::UIElements::VisualElement* element, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId,
                                   ::ByRef<::UnityEngine::UIElements::BindingInfo> bindingInfo);

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>* getStaticF_k_AutoCompleteVisitors();

  static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>* getStaticF_k_TypeVisitors();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_ReplaceIndices();

  static inline void setStaticF_k_AutoCompleteVisitors(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>* value);

  static inline void setStaticF_k_TypeVisitors(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::Internal::TypePathVisitor*>* value);

  static inline void setStaticF_s_ReplaceIndices(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBindingUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBindingUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBindingUtility(DataBindingUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBindingUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBindingUtility(DataBindingUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DataBindingUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DataBindingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DataBindingUtility*, "UnityEngine.UIElements", "DataBindingUtility");
NEED_NO_BOX(::UnityEngine::UIElements::DataBindingUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DataBindingUtility___c*, "UnityEngine.UIElements", "DataBindingUtility/<>c");
