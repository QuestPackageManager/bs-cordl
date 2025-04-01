#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescriptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortColumnDescriptions)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescriptions_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescriptions_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectListAttributeDescription_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SortColumnDescriptions;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescriptions_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescriptions_UxmlObjectTraits_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescriptions);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1);
// Dependencies UnityEngine.UIElements.UxmlObjectFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescriptions/UxmlObjectFactory`1<T>
class CORDL_TYPE SortColumnDescriptions_UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T, ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescriptions_UxmlObjectFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions_UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescriptions_UxmlObjectFactory_1(SortColumnDescriptions_UxmlObjectFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions_UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescriptions_UxmlObjectFactory_1(SortColumnDescriptions_UxmlObjectFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5663 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlObjectTraits`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescriptions/UxmlObjectTraits`1<T>
class CORDL_TYPE SortColumnDescriptions_UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
public:
  // Declarations
  /// @brief Field m_SortColumnDescriptions, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_SortColumnDescriptions,
      put =
          __cordl_internal_set_m_SortColumnDescriptions)) ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortColumnDescriptions;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_m_SortColumnDescriptions() const;

  constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_SortColumnDescriptions();

  constexpr void __cordl_internal_set_m_SortColumnDescriptions(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescriptions_UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions_UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescriptions_UxmlObjectTraits_1(SortColumnDescriptions_UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions_UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescriptions_UxmlObjectTraits_1(SortColumnDescriptions_UxmlObjectTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5664 };

  /// @brief Field m_SortColumnDescriptions, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_SortColumnDescriptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescriptions
class CORDL_TYPE SortColumnDescriptions : public ::System::Object {
public:
  // Declarations
  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field changed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Action* changed;

  /// @brief Field m_Descriptions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Descriptions,
                      put = __cordl_internal_set_m_Descriptions)) ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* m_Descriptions;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x49fb6b4, size 0xb4, virtual true, abstract: false, final true
  inline void Add(::UnityEngine::UIElements::SortColumnDescription* item);

  /// @brief Method Clear, addr 0x49f9f1c, size 0x140, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x49fba9c, size 0xac, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::UIElements::SortColumnDescription* item);

  /// @brief Method CopyTo, addr 0x49fbb48, size 0xbc, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::UnityEngine::UIElements::SortColumnDescription*, ::Array<::UnityEngine::UIElements::SortColumnDescription*>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x49fb610, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::SortColumnDescription*>* GetEnumerator();

  /// @brief Method Insert, addr 0x49fb768, size 0x1bc, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::SortColumnDescription* desc);

  static inline ::UnityEngine::UIElements::SortColumnDescriptions* New_ctor();

  /// @brief Method OnDescriptionChanged, addr 0x49fbc04, size 0x1c, virtual false, abstract: false, final false
  inline void OnDescriptionChanged(::UnityEngine::UIElements::SortColumnDescription* desc);

  /// @brief Method Remove, addr 0x49fb924, size 0x178, virtual true, abstract: false, final true
  inline bool Remove(::UnityEngine::UIElements::SortColumnDescription* desc);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x49fb6b0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Action* const& __cordl_internal_get_changed() const;

  constexpr ::System::Action*& __cordl_internal_get_changed();

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_m_Descriptions() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_m_Descriptions();

  constexpr void __cordl_internal_set_changed(::System::Action* value);

  constexpr void __cordl_internal_set_m_Descriptions(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method .ctor, addr 0x49fa264, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_changed, addr 0x49fb4d8, size 0x9c, virtual false, abstract: false, final false
  inline void add_changed(::System::Action* value);

  /// @brief Method get_Count, addr 0x49fbc20, size 0xa0, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x49fbcc0, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
  constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*
  i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__SortColumnDescription__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__SortColumnDescription__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_changed, addr 0x49fb574, size 0x9c, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescriptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescriptions(SortColumnDescriptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescriptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescriptions(SortColumnDescriptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5665 };

  /// @brief Field m_Descriptions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* ___m_Descriptions;

  /// @brief Field changed, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescriptions, ___m_Descriptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescriptions, ___changed) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SortColumnDescriptions, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SortColumnDescriptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SortColumnDescriptions*, "UnityEngine.UIElements", "SortColumnDescriptions");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1, "UnityEngine.UIElements", "SortColumnDescriptions/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1, "UnityEngine.UIElements", "SortColumnDescriptions/UxmlObjectTraits`1");
