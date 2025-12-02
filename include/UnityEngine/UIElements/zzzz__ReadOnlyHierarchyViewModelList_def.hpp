#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReadOnlyHierarchyViewModelList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHierarchyViewModelList)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace UnityEngine::UIElements {
struct ReadOnlyHierarchyViewModelList_Enumerator;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReadOnlyHierarchyViewModelList;
}
namespace UnityEngine::UIElements {
struct ReadOnlyHierarchyViewModelList_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList);
MARK_VAL_T(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator);
// Dependencies Unity.Hierarchy.HierarchyViewModel::Enumerator
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList/Enumerator
struct CORDL_TYPE ReadOnlyHierarchyViewModelList_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method MoveNext, addr 0x6a19b28, size 0x20, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x6a19b48, size 0x2c, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method .ctor, addr 0x6a19908, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* hierarchyViewModel);

  /// @brief Method get_Current, addr 0x6a19abc, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyHierarchyViewModelList_Enumerator();

  // Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None }, CppParam { name: "m_Enumerator", ty:
  // "::Unity::Hierarchy::HierarchyViewModel_Enumerator", modifiers: "", def_value: None }]
  constexpr ReadOnlyHierarchyViewModelList_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewModel_Enumerator m_Enumerator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4073 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Field m_Enumerator, offset: 0x8, size: 0x28, def value: None
  ::Unity::Hierarchy::HierarchyViewModel_Enumerator m_Enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator, m_Enumerator) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReadOnlyHierarchyViewModelList
class CORDL_TYPE ReadOnlyHierarchyViewModelList : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field m_HierarchyViewModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HierarchyViewModel, put = __cordl_internal_set_m_HierarchyViewModel)) ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method Add, addr 0x6a199a4, size 0x38, virtual true, abstract: false, final true
  inline int32_t Add(::System::Object* value);

  /// @brief Method Clear, addr 0x6a199dc, size 0x38, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x6a195c8, size 0x90, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* value);

  /// @brief Method CopyTo, addr 0x6a197d0, size 0xbc, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x6a1988c, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x6a19658, size 0xbc, virtual true, abstract: false, final true
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x6a19a14, size 0x38, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::System::Object* value);

  static inline ::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList* New_ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel);

  /// @brief Method Remove, addr 0x6a19a4c, size 0x38, virtual true, abstract: false, final true
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x6a19a84, size 0x38, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  constexpr ::Unity::Hierarchy::HierarchyViewModel* const& __cordl_internal_get_m_HierarchyViewModel() const;

  constexpr ::Unity::Hierarchy::HierarchyViewModel*& __cordl_internal_get_m_HierarchyViewModel();

  constexpr void __cordl_internal_set_m_HierarchyViewModel(::Unity::Hierarchy::HierarchyViewModel* value);

  /// @brief Method .ctor, addr 0x6a19714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel);

  /// @brief Method get_Count, addr 0x6a195b0, size 0x18, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x6a195a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x6a195a8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x6a19934, size 0x38, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x6a1971c, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x6a1996c, size 0x38, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Method set_Item, addr 0x6a19798, size 0x38, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyHierarchyViewModelList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHierarchyViewModelList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyHierarchyViewModelList(ReadOnlyHierarchyViewModelList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHierarchyViewModelList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyHierarchyViewModelList(ReadOnlyHierarchyViewModelList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4074 };

  /// @brief Field m_HierarchyViewModel, offset: 0x10, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* ___m_HierarchyViewModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList, ___m_HierarchyViewModel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList*, "UnityEngine.UIElements", "ReadOnlyHierarchyViewModelList");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReadOnlyHierarchyViewModelList_Enumerator, "UnityEngine.UIElements", "ReadOnlyHierarchyViewModelList/Enumerator");
