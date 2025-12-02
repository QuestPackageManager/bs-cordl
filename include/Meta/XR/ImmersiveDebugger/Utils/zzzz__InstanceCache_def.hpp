#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/InstanceCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstanceCache)
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IInspector;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache___c__DisplayClass12_0;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.InstanceCache/<>c__DisplayClass12_0
class CORDL_TYPE InstanceCache___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field classType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_classType, put = __cordl_internal_set_classType)) ::System::Type* classType;

  static inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0* New_ctor();

  /// @brief Method <FetchObjectsHandlesOfType>b__0, addr 0x5831bcc, size 0x18, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle _FetchObjectsHandlesOfType_b__0(::UnityEngine::Object* obj);

  constexpr ::System::Type* const& __cordl_internal_get_classType() const;

  constexpr ::System::Type*& __cordl_internal_get_classType();

  constexpr void __cordl_internal_set_classType(::System::Type* value);

  /// @brief Method .ctor, addr 0x5831034, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCache___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCache___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCache___c__DisplayClass12_0(InstanceCache___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCache___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCache___c__DisplayClass12_0(InstanceCache___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18300 };

  /// @brief Field classType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___classType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0, ___classType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Utils {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Utils.InstanceCache
class CORDL_TYPE InstanceCache : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0;

  /// @brief Field CacheData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_CacheData, put = __cordl_internal_set_CacheData)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* CacheData;

  /// @brief Field OnCacheChangedForTypeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnCacheChangedForTypeEvent, put = __cordl_internal_set_OnCacheChangedForTypeEvent)) ::System::Action_1<::System::Type*>* OnCacheChangedForTypeEvent;

  /// @brief Field OnInstanceAdded, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_OnInstanceAdded,
      put = __cordl_internal_set_OnInstanceAdded)) ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* OnInstanceAdded;

  /// @brief Field OnInstanceRemoved, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_OnInstanceRemoved,
                      put = __cordl_internal_set_OnInstanceRemoved)) ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* OnInstanceRemoved;

  /// @brief Field _emptyCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyCache,
                      put = __cordl_internal_set__emptyCache)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* _emptyCache;

  /// @brief Method FetchObjectsHandlesOfType, addr 0x5830f08, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* FetchObjectsHandlesOfType(::System::Type* classType);

  /// @brief Method GetCacheDataForClass, addr 0x5830e8c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* GetCacheDataForClass(::System::Type* classType);

  static inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* New_ctor();

  /// @brief Method RegisterClassType, addr 0x5831038, size 0x10c, virtual false, abstract: false, final false
  inline void RegisterClassType(::System::Type* classType);

  /// @brief Method RegisterClassTypes, addr 0x5831144, size 0x2ac, virtual false, abstract: false, final false
  inline void RegisterClassTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method RegisterHandle, addr 0x582adf0, size 0x12c, virtual false, abstract: false, final false
  inline void RegisterHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  /// @brief Method RetrieveInstances, addr 0x58313f0, size 0x614, virtual false, abstract: false, final false
  inline void RetrieveInstances();

  /// @brief Method UnregisterHandle, addr 0x582af64, size 0xb8, virtual false, abstract: false, final false
  inline void UnregisterHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* const&
  __cordl_internal_get_CacheData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>*&
  __cordl_internal_get_CacheData();

  constexpr ::System::Action_1<::System::Type*>* const& __cordl_internal_get_OnCacheChangedForTypeEvent() const;

  constexpr ::System::Action_1<::System::Type*>*& __cordl_internal_get_OnCacheChangedForTypeEvent();

  constexpr ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* const& __cordl_internal_get_OnInstanceAdded() const;

  constexpr ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>*& __cordl_internal_get_OnInstanceAdded();

  constexpr ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* const& __cordl_internal_get_OnInstanceRemoved() const;

  constexpr ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*& __cordl_internal_get_OnInstanceRemoved();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* const& __cordl_internal_get__emptyCache() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*& __cordl_internal_get__emptyCache();

  constexpr void
  __cordl_internal_set_CacheData(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* value);

  constexpr void __cordl_internal_set_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_OnInstanceAdded(::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value);

  constexpr void __cordl_internal_set_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value);

  constexpr void __cordl_internal_set__emptyCache(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value);

  /// @brief Method .ctor, addr 0x5831aec, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnCacheChangedForTypeEvent, addr 0x5830a0c, size 0xc0, virtual false, abstract: false, final false
  inline void add_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value);

  /// @brief Method add_OnInstanceAdded, addr 0x5830b8c, size 0xc0, virtual false, abstract: false, final false
  inline void add_OnInstanceAdded(::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value);

  /// @brief Method add_OnInstanceRemoved, addr 0x5830d0c, size 0xc0, virtual false, abstract: false, final false
  inline void add_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value);

  /// @brief Method remove_OnCacheChangedForTypeEvent, addr 0x5830acc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_OnCacheChangedForTypeEvent(::System::Action_1<::System::Type*>* value);

  /// @brief Method remove_OnInstanceAdded, addr 0x5830c4c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_OnInstanceAdded(::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* value);

  /// @brief Method remove_OnInstanceRemoved, addr 0x5830dcc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_OnInstanceRemoved(::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCache(InstanceCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCache(InstanceCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18301 };

  /// @brief Field CacheData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>*>* ___CacheData;

  /// @brief Field _emptyCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* ____emptyCache;

  /// @brief Field OnCacheChangedForTypeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::System::Type*>* ___OnCacheChangedForTypeEvent;

  /// @brief Field OnInstanceAdded, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>* ___OnInstanceAdded;

  /// @brief Field OnInstanceRemoved, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>* ___OnInstanceRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, ___CacheData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, ____emptyCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, ___OnCacheChangedForTypeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, ___OnInstanceAdded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, ___OnInstanceRemoved) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Utils::InstanceCache, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Utils
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*, "Meta.XR.ImmersiveDebugger.Utils", "InstanceCache");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache___c__DisplayClass12_0*, "Meta.XR.ImmersiveDebugger.Utils", "InstanceCache/<>c__DisplayClass12_0");
