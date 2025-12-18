#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableSystems.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableSystems)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;
}
namespace UnityEngine::Playables {
struct DataPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class PlayableSystems_DataPlayableOutputList;
}
namespace UnityEngine::Playables {
class PlayableSystems_PlayableSystemDelegate;
}
namespace UnityEngine::Playables {
struct PlayableSystems_PlayableSystemStage;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableSystems_PlayableSystemStage;
}
namespace UnityEngine::Playables {
class DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;
}
namespace UnityEngine::Playables {
class PlayableSystems;
}
namespace UnityEngine::Playables {
class PlayableSystems_DataPlayableOutputList;
}
namespace UnityEngine::Playables {
class PlayableSystems_PlayableSystemDelegate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableSystems_PlayableSystemStage);
MARK_REF_PTR_T(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator);
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableSystems);
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList);
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/PlayableSystemDelegate
class CORDL_TYPE PlayableSystems_PlayableSystemDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x696a180, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>* outputs);

  static inline ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x696a03c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableSystems_PlayableSystemDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_PlayableSystemDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableSystems_PlayableSystemDelegate(PlayableSystems_PlayableSystemDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_PlayableSystemDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableSystems_PlayableSystemDelegate(PlayableSystems_PlayableSystemDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableSystems/PlayableSystemStage
struct CORDL_TYPE PlayableSystems_PlayableSystemStage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __PlayableSystems_PlayableSystemStage_Unwrapped
  enum struct __PlayableSystems_PlayableSystemStage_Unwrapped : uint16_t {
    __E_FixedUpdate = static_cast<uint16_t>(0x0u),
    __E_FixedUpdatePostPhysics = static_cast<uint16_t>(0x1u),
    __E_Update = static_cast<uint16_t>(0x2u),
    __E_AnimationBegin = static_cast<uint16_t>(0x3u),
    __E_AnimationEnd = static_cast<uint16_t>(0x4u),
    __E_LateUpdate = static_cast<uint16_t>(0x5u),
    __E_Render = static_cast<uint16_t>(0x6u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayableSystems_PlayableSystemStage_Unwrapped() const noexcept {
    return static_cast<__PlayableSystems_PlayableSystemStage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableSystems_PlayableSystemStage();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr PlayableSystems_PlayableSystemStage(uint16_t value__) noexcept;

  /// @brief Field AnimationBegin value: U16(3)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const AnimationBegin;

  /// @brief Field AnimationEnd value: U16(4)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const AnimationEnd;

  /// @brief Field FixedUpdate value: U16(0)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const FixedUpdate;

  /// @brief Field FixedUpdatePostPhysics value: U16(1)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const FixedUpdatePostPhysics;

  /// @brief Field LateUpdate value: U16(5)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const LateUpdate;

  /// @brief Field Render value: U16(6)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const Render;

  /// @brief Field Update value: U16(2)
  static ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage const Update;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22352 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableSystems_PlayableSystemStage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableSystems_PlayableSystemStage, 0x2>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/DataPlayableOutputList/DataPlayableOutputEnumerator
class CORDL_TYPE DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::Playables::DataPlayableOutput Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field m_Index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* m_List;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x696a470, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x696a478, size 0x2c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator* New_ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* list);

  /// @brief Method Reset, addr 0x696a4a4, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x696a408, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* const& __cordl_internal_get_m_List() const;

  constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_List(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* value);

  /// @brief Method .ctor, addr 0x696a314, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* list);

  /// @brief Method get_Current, addr 0x696a328, size 0xe0, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::DataPlayableOutput get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator(DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator(DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22353 };

  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* ___m_List;

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator, ___m_List) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator, ___m_Index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/DataPlayableOutputList
class CORDL_TYPE PlayableSystems_DataPlayableOutputList : public ::System::Object {
public:
  // Declarations
  using DataPlayableOutputEnumerator = ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::UnityEngine::Playables::DataPlayableOutput Item[];

  /// @brief Field m_Count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_Outputs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Outputs, put = __cordl_internal_set_m_Outputs)) ::UnityEngine::Playables::PlayableOutputHandle* m_Outputs;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x696a2bc, size 0x58, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>* GetEnumerator();

  static inline ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* New_ctor(::UnityEngine::Playables::PlayableOutputHandle* outputs, int32_t count);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x696a324, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr ::UnityEngine::Playables::PlayableOutputHandle* const& __cordl_internal_get_m_Outputs() const;

  constexpr ::UnityEngine::Playables::PlayableOutputHandle*& __cordl_internal_get_m_Outputs();

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_Outputs(::UnityEngine::Playables::PlayableOutputHandle* value);

  /// @brief Method .ctor, addr 0x6969ed0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle* outputs, int32_t count);

  /// @brief Method get_Count, addr 0x696a2b4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x696a194, size 0x120, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::DataPlayableOutput get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*
  i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
  constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*
  i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableSystems_DataPlayableOutputList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_DataPlayableOutputList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableSystems_DataPlayableOutputList(PlayableSystems_DataPlayableOutputList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_DataPlayableOutputList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableSystems_DataPlayableOutputList(PlayableSystems_DataPlayableOutputList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22354 };

  /// @brief Field m_Outputs, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle* ___m_Outputs;

  /// @brief Field m_Count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList, ___m_Outputs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList, ___m_Count) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems
class CORDL_TYPE PlayableSystems : public ::System::Object {
public:
  // Declarations
  using DataPlayableOutputList = ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList;

  using PlayableSystemDelegate = ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate;

  using PlayableSystemStage = ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage;

  /// @brief Field s_Delegates, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Delegates,
                      put = setStaticF_s_Delegates)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* s_Delegates;

  /// @brief Field s_RWLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RWLock, put = setStaticF_s_RWLock)) ::System::Threading::ReaderWriterLockSlim* s_RWLock;

  /// @brief Field s_SystemTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SystemTypes, put = setStaticF_s_SystemTypes)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>* s_SystemTypes;

  /// @brief Method CombineTypeAndIndex, addr 0x6969d18, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CombineTypeAndIndex(int32_t typeIndex, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage stage);

  /// @brief Method Internal_CallSystemDelegate, addr 0x6969d24, size 0x1ac, virtual false, abstract: false, final false
  static inline bool Internal_CallSystemDelegate(int32_t systemIndex, ::UnityEngine::Playables::PlayableSystems_PlayableSystemStage stage, ::System::IntPtr outputsPtr, int32_t numOutputs);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* getStaticF_s_Delegates();

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF_s_RWLock();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>* getStaticF_s_SystemTypes();

  static inline void setStaticF_s_Delegates(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* value);

  static inline void setStaticF_s_RWLock(::System::Threading::ReaderWriterLockSlim* value);

  static inline void setStaticF_s_SystemTypes(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableSystems();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableSystems(PlayableSystems&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableSystems", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableSystems(PlayableSystems const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableSystems, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableSystems_PlayableSystemStage, "UnityEngine.Playables", "PlayableSystems/PlayableSystemStage");
NEED_NO_BOX(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*, "UnityEngine.Playables",
                       "PlayableSystems/DataPlayableOutputList/DataPlayableOutputEnumerator");
NEED_NO_BOX(::UnityEngine::Playables::PlayableSystems);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableSystems*, "UnityEngine.Playables", "PlayableSystems");
NEED_NO_BOX(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*, "UnityEngine.Playables", "PlayableSystems/DataPlayableOutputList");
NEED_NO_BOX(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*, "UnityEngine.Playables", "PlayableSystems/PlayableSystemDelegate");
