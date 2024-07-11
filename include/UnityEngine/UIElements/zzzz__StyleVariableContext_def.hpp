#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct StyleVariable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleVariableContext);
// Type: UnityEngine.UIElements::StyleVariableContext
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleVariableContext*
class CORDL_TYPE StyleVariableContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_SortedHash, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedHash, put = __cordl_internal_set_m_SortedHash))::System::Collections::Generic::List_1<int32_t>* m_SortedHash;

  /// @brief Field m_VariableHash, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VariableHash, put = __cordl_internal_set_m_VariableHash)) int32_t m_VariableHash;

  /// @brief Field m_Variables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Variables, put = __cordl_internal_set_m_Variables))::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* m_Variables;

  /// @brief Field none, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_none, put = setStaticF_none))::UnityEngine::UIElements::StyleVariableContext* none;

  /// @brief Method Add, addr 0x35ffd98, size 0x1a0, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::UIElements::StyleVariable sv);

  /// @brief Method AddInitialRange, addr 0x35fff38, size 0xf8, virtual false, abstract: false, final false
  inline void AddInitialRange(::UnityEngine::UIElements::StyleVariableContext* other);

  /// @brief Method Clear, addr 0x3600030, size 0x9c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetVariableHash, addr 0x360036c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetVariableHash();

  static inline ::UnityEngine::UIElements::StyleVariableContext* New_ctor();

  static inline ::UnityEngine::UIElements::StyleVariableContext* New_ctor(::UnityEngine::UIElements::StyleVariableContext* other);

  /// @brief Method TryFindVariable, addr 0x3600280, size 0xec, virtual false, abstract: false, final false
  inline bool TryFindVariable(::StringW name, ByRef<::UnityEngine::UIElements::StyleVariable> v);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_SortedHash();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_m_SortedHash() const;

  constexpr int32_t const& __cordl_internal_get_m_VariableHash() const;

  constexpr int32_t& __cordl_internal_get_m_VariableHash();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>*& __cordl_internal_get_m_Variables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>*> const& __cordl_internal_get_m_Variables() const;

  constexpr void __cordl_internal_set_m_SortedHash(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_VariableHash(int32_t value);

  constexpr void __cordl_internal_set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* value);

  /// @brief Method .ctor, addr 0x36000cc, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3600194, size 0xec, virtual false, abstract: false, final false
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

  /// @brief Field m_VariableHash, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_VariableHash;

  /// @brief Field m_Variables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleVariable>* ___m_Variables;

  /// @brief Field m_SortedHash, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_SortedHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleVariableContext, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_VariableHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_Variables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleVariableContext, ___m_SortedHash) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleVariableContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleVariableContext*, "UnityEngine.UIElements", "StyleVariableContext");
