#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct StyleVariableContext___c__DisplayClass7_0;
}
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
struct StyleVariableContext___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleVariableContext);
MARK_VAL_T(::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariableContext/<>c__DisplayClass7_0
struct CORDL_TYPE StyleVariableContext___c__DisplayClass7_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableContext___c__DisplayClass7_0();

  // Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleVariableContext___c__DisplayClass7_0(int32_t hash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field hash, offset: 0x0, size: 0x4, def value: None
  int32_t hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0, hash) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleVariableContext
class CORDL_TYPE StyleVariableContext : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0;

  /// @brief Field m_SortedHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedHash, put = __cordl_internal_set_m_SortedHash)) ::System::Collections::Generic::List_1<int32_t>* m_SortedHash;

  /// @brief Field m_UnsortedHash, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnsortedHash, put = __cordl_internal_set_m_UnsortedHash)) ::System::Collections::Generic::List_1<int32_t>* m_UnsortedHash;

  /// @brief Field m_VariableHash, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VariableHash, put = __cordl_internal_set_m_VariableHash)) int32_t m_VariableHash;

  /// @brief Field m_Variables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Variables, put = __cordl_internal_set_m_Variables)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* m_Variables;

  /// @brief Field none, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_none, put = setStaticF_none)) ::UnityEngine::UIElements::StyleVariableContext* none;

  /// @brief Method Add, addr 0x4a8ee98, size 0x310, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::StyleVariable sv);

  /// @brief Method AddInitialRange, addr 0x4a8f1b8, size 0x10c, virtual false, abstract: false, final false
  inline void AddInitialRange(::UnityEngine::UIElements::StyleVariableContext* other);

  /// @brief Method Clear, addr 0x4a8f2c4, size 0xb0, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetVariableHash, addr 0x4a8f650, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetVariableHash();

  static inline ::UnityEngine::UIElements::StyleVariableContext* New_ctor();

  static inline ::UnityEngine::UIElements::StyleVariableContext* New_ctor(::UnityEngine::UIElements::StyleVariableContext* other);

  /// @brief Method TryFindVariable, addr 0x4a8f564, size 0xec, virtual false, abstract: false, final false
  inline bool TryFindVariable(::StringW name, ::ByRef<::UnityEngine::UIElements::StyleVariable> v);

  /// @brief Method <Add>g__ComputeOrderSensitiveHash|7_0, addr 0x4a8f1a8, size 0x10, virtual false, abstract: false, final false
  static inline int32_t _Add_g__ComputeOrderSensitiveHash_7_0(int32_t index, ::ByRef<::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_SortedHash() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SortedHash();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_UnsortedHash() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_UnsortedHash();

  constexpr int32_t const& __cordl_internal_get_m_VariableHash() const;

  constexpr int32_t& __cordl_internal_get_m_VariableHash();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* const& __cordl_internal_get_m_Variables() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>*& __cordl_internal_get_m_Variables();

  constexpr void __cordl_internal_set_m_SortedHash(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_UnsortedHash(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_VariableHash(int32_t value);

  constexpr void __cordl_internal_set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* value);

  /// @brief Method .ctor, addr 0x4a8f374, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a8f458, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleVariableContext* other);

  static inline ::UnityEngine::UIElements::StyleVariableContext* getStaticF_none();

  static inline void setStaticF_none(::UnityEngine::UIElements::StyleVariableContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleVariableContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleVariableContext(StyleVariableContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleVariableContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleVariableContext(StyleVariableContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6190 };

  /// @brief Field m_VariableHash, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_VariableHash;

  /// @brief Field m_Variables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* ___m_Variables;

  /// @brief Field m_SortedHash, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SortedHash;

  /// @brief Field m_UnsortedHash, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_UnsortedHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_VariableHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_Variables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_SortedHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_UnsortedHash) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableContext, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableContext*, "UnityEngine.UIElements", "StyleVariableContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableContext___c__DisplayClass7_0, "UnityEngine.UIElements", "StyleVariableContext/<>c__DisplayClass7_0");
