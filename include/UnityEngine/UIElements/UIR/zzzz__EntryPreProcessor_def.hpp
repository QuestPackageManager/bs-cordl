#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryPreProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryPreProcessor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::UIElements::UIR {
struct EntryPreProcessor_AllocSize;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class EntryPreProcessor;
}
namespace UnityEngine::UIElements::UIR {
struct EntryPreProcessor_AllocSize;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::EntryPreProcessor);
MARK_VAL_T(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryPreProcessor/AllocSize
struct CORDL_TYPE EntryPreProcessor_AllocSize {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryPreProcessor_AllocSize();

  // Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntryPreProcessor_AllocSize(int32_t vertexCount, int32_t indexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field indexCount, offset: 0x4, size: 0x4, def value: None
  int32_t indexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize, indexCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, UnityEngine.UIElements.UIR.EntryPreProcessor::AllocSize
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.EntryPreProcessor
class CORDL_TYPE EntryPreProcessor : public ::System::Object {
public:
  // Declarations
  using AllocSize = ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize;

  __declspec(property(get = get_childrenIndex)) int32_t childrenIndex;

  __declspec(property(get = get_flattenedEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* flattenedEntries;

  __declspec(property(get = get_headAllocs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* headAllocs;

  /// @brief Field m_Allocs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Allocs,
                      put = __cordl_internal_set_m_Allocs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* m_Allocs;

  /// @brief Field m_ChildrenIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildrenIndex, put = __cordl_internal_set_m_ChildrenIndex)) int32_t m_ChildrenIndex;

  /// @brief Field m_FlattenedEntries, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FlattenedEntries,
                      put = __cordl_internal_set_m_FlattenedEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* m_FlattenedEntries;

  /// @brief Field m_HeadAllocs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeadAllocs,
                      put = __cordl_internal_set_m_HeadAllocs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* m_HeadAllocs;

  /// @brief Field m_IsPushingMask, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPushingMask, put = __cordl_internal_set_m_IsPushingMask)) bool m_IsPushingMask;

  /// @brief Field m_Mask, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mask,
                      put = __cordl_internal_set_m_Mask)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* m_Mask;

  /// @brief Field m_Pending, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pending, put = __cordl_internal_set_m_Pending)) ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize m_Pending;

  /// @brief Field m_TailAllocs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TailAllocs,
                      put = __cordl_internal_set_m_TailAllocs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* m_TailAllocs;

  __declspec(property(get = get_tailAllocs)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* tailAllocs;

  /// @brief Method Add, addr 0x6b0e240, size 0x168, virtual false, abstract: false, final false
  inline void Add(int32_t vertexCount, int32_t indexCount);

  /// @brief Method ClearReferences, addr 0x6b0e1c8, size 0x78, virtual false, abstract: false, final false
  inline void ClearReferences();

  /// @brief Method DoEvaluate, addr 0x6b0de10, size 0x3b8, virtual false, abstract: false, final false
  inline void DoEvaluate(::UnityEngine::UIElements::UIR::Entry* entry);

  /// @brief Method Flush, addr 0x6b0e3a8, size 0xb0, virtual false, abstract: false, final false
  inline void Flush();

  static inline ::UnityEngine::UIElements::UIR::EntryPreProcessor* New_ctor();

  /// @brief Method PreProcess, addr 0x6b0dc44, size 0x1cc, virtual false, abstract: false, final false
  inline void PreProcess(::UnityEngine::UIElements::UIR::Entry* root);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const& __cordl_internal_get_m_Allocs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& __cordl_internal_get_m_Allocs();

  constexpr int32_t const& __cordl_internal_get_m_ChildrenIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ChildrenIndex();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* const& __cordl_internal_get_m_FlattenedEntries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>*& __cordl_internal_get_m_FlattenedEntries();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const& __cordl_internal_get_m_HeadAllocs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& __cordl_internal_get_m_HeadAllocs();

  constexpr bool const& __cordl_internal_get_m_IsPushingMask() const;

  constexpr bool& __cordl_internal_get_m_IsPushingMask();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const& __cordl_internal_get_m_Mask() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& __cordl_internal_get_m_Mask();

  constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize const& __cordl_internal_get_m_Pending() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize& __cordl_internal_get_m_Pending();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* const& __cordl_internal_get_m_TailAllocs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>*& __cordl_internal_get_m_TailAllocs();

  constexpr void __cordl_internal_set_m_Allocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value);

  constexpr void __cordl_internal_set_m_ChildrenIndex(int32_t value);

  constexpr void __cordl_internal_set_m_FlattenedEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* value);

  constexpr void __cordl_internal_set_m_HeadAllocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value);

  constexpr void __cordl_internal_set_m_IsPushingMask(bool value);

  constexpr void __cordl_internal_set_m_Mask(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value);

  constexpr void __cordl_internal_set_m_Pending(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize value);

  constexpr void __cordl_internal_set_m_TailAllocs(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* value);

  /// @brief Method .ctor, addr 0x6b0e458, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childrenIndex, addr 0x6b0dc24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_childrenIndex();

  /// @brief Method get_flattenedEntries, addr 0x6b0dc3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* get_flattenedEntries();

  /// @brief Method get_headAllocs, addr 0x6b0dc2c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* get_headAllocs();

  /// @brief Method get_tailAllocs, addr 0x6b0dc34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* get_tailAllocs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryPreProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryPreProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryPreProcessor(EntryPreProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryPreProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryPreProcessor(EntryPreProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5290 };

  /// @brief Field m_ChildrenIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ChildrenIndex;

  /// @brief Field m_Allocs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* ___m_Allocs;

  /// @brief Field m_HeadAllocs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* ___m_HeadAllocs;

  /// @brief Field m_TailAllocs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* ___m_TailAllocs;

  /// @brief Field m_FlattenedEntries, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Entry*>* ___m_FlattenedEntries;

  /// @brief Field m_Pending, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize ___m_Pending;

  /// @brief Field m_Mask, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* ___m_Mask;

  /// @brief Field m_IsPushingMask, offset: 0x48, size: 0x1, def value: None
  bool ___m_IsPushingMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_ChildrenIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_Allocs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_HeadAllocs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_TailAllocs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_FlattenedEntries) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_Pending) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_Mask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryPreProcessor, ___m_IsPushingMask) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryPreProcessor, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::EntryPreProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryPreProcessor*, "UnityEngine.UIElements.UIR", "EntryPreProcessor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize, "UnityEngine.UIElements.UIR", "EntryPreProcessor/AllocSize");
