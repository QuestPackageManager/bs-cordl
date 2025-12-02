#pragma once
// IWYU pragma private; include "UnityEngine/ObjectDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDispatcher)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Action_8;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ObjectDispatcher_TransformTrackingType;
}
namespace UnityEngine {
struct ObjectDispatcher_TypeTrackingFlags;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct TransformDispatchData;
}
namespace UnityEngine {
struct TypeDispatchData;
}
// Forward declare root types
namespace UnityEngine {
struct ObjectDispatcher_TransformTrackingType;
}
namespace UnityEngine {
struct ObjectDispatcher_TypeTrackingFlags;
}
namespace UnityEngine {
class ObjectDispatcher;
}
namespace UnityEngine {
class ObjectDispatcher___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ObjectDispatcher_TransformTrackingType);
MARK_VAL_T(::UnityEngine::ObjectDispatcher_TypeTrackingFlags);
MARK_REF_PTR_T(::UnityEngine::ObjectDispatcher);
MARK_REF_PTR_T(::UnityEngine::ObjectDispatcher___c);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ObjectDispatcher/TransformTrackingType
struct CORDL_TYPE ObjectDispatcher_TransformTrackingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObjectDispatcher_TransformTrackingType_Unwrapped
  enum struct __ObjectDispatcher_TransformTrackingType_Unwrapped : int32_t {
    __E_GlobalTRS = static_cast<int32_t>(0x0),
    __E_LocalTRS = static_cast<int32_t>(0x1),
    __E_Hierarchy = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObjectDispatcher_TransformTrackingType_Unwrapped() const noexcept {
    return static_cast<__ObjectDispatcher_TransformTrackingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher_TransformTrackingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObjectDispatcher_TransformTrackingType(int32_t value__) noexcept;

  /// @brief Field GlobalTRS value: I32(0)
  static ::UnityEngine::ObjectDispatcher_TransformTrackingType const GlobalTRS;

  /// @brief Field Hierarchy value: I32(2)
  static ::UnityEngine::ObjectDispatcher_TransformTrackingType const Hierarchy;

  /// @brief Field LocalTRS value: I32(1)
  static ::UnityEngine::ObjectDispatcher_TransformTrackingType const LocalTRS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectDispatcher_TransformTrackingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher_TransformTrackingType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ObjectDispatcher/TypeTrackingFlags
struct CORDL_TYPE ObjectDispatcher_TypeTrackingFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObjectDispatcher_TypeTrackingFlags_Unwrapped
  enum struct __ObjectDispatcher_TypeTrackingFlags_Unwrapped : int32_t {
    __E_SceneObjects = static_cast<int32_t>(0x1),
    __E_Assets = static_cast<int32_t>(0x2),
    __E_EditorOnlyObjects = static_cast<int32_t>(0x4),
    __E_Default = static_cast<int32_t>(0x3),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObjectDispatcher_TypeTrackingFlags_Unwrapped() const noexcept {
    return static_cast<__ObjectDispatcher_TypeTrackingFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher_TypeTrackingFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObjectDispatcher_TypeTrackingFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::ObjectDispatcher_TypeTrackingFlags const All;

  /// @brief Field Assets value: I32(2)
  static ::UnityEngine::ObjectDispatcher_TypeTrackingFlags const Assets;

  /// @brief Field Default value: I32(3)
  static ::UnityEngine::ObjectDispatcher_TypeTrackingFlags const Default;

  /// @brief Field EditorOnlyObjects value: I32(4)
  static ::UnityEngine::ObjectDispatcher_TypeTrackingFlags const EditorOnlyObjects;

  /// @brief Field SceneObjects value: I32(1)
  static ::UnityEngine::ObjectDispatcher_TypeTrackingFlags const SceneObjects;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10242 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectDispatcher_TypeTrackingFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher_TypeTrackingFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher/<>c
class CORDL_TYPE ObjectDispatcher___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ObjectDispatcher___c* __9;

  static inline ::UnityEngine::ObjectDispatcher___c* New_ctor();

  /// @brief Method <.cctor>b__64_0, addr 0x68a2628, size 0xa4, virtual false, abstract: false, final false
  inline void __cctor_b__64_0(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> changed, ::System::IntPtr changedID, ::System::IntPtr destroyedID, int32_t changedCount,
                              int32_t destroyedCount, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback);

  /// @brief Method <.cctor>b__64_1, addr 0x68a26cc, size 0x120, virtual false, abstract: false, final false
  inline void __cctor_b__64_1(::System::IntPtr transformed, ::System::IntPtr parents, ::System::IntPtr localToWorldMatrices, ::System::IntPtr positions, ::System::IntPtr rotations,
                              ::System::IntPtr scales, int32_t count, ::System::Action_1<::UnityEngine::TransformDispatchData>* callback);

  /// @brief Method .ctor, addr 0x68a2624, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ObjectDispatcher___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::ObjectDispatcher___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDispatcher___c(ObjectDispatcher___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDispatcher___c(ObjectDispatcher___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10243 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object, Unity.Collections.Allocator, UnityEngine.TransformDispatchData, UnityEngine.TypeDispatchData
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ObjectDispatcher
class CORDL_TYPE ObjectDispatcher : public ::System::Object {
public:
  // Declarations
  using TransformTrackingType = ::UnityEngine::ObjectDispatcher_TransformTrackingType;

  using TypeTrackingFlags = ::UnityEngine::ObjectDispatcher_TypeTrackingFlags;

  using __c = ::UnityEngine::ObjectDispatcher___c;

  /// @brief Field m_DispatchAllocator, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DispatchAllocator, put = __cordl_internal_set_m_DispatchAllocator)) ::Unity::Collections::Allocator m_DispatchAllocator;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_TransformComponentCallback, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformComponentCallback,
                      put = __cordl_internal_set_m_TransformComponentCallback)) ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>*
      m_TransformComponentCallback;

  /// @brief Field m_TransformDataCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformDataCallback,
                      put = __cordl_internal_set_m_TransformDataCallback)) ::System::Action_1<::UnityEngine::TransformDispatchData>* m_TransformDataCallback;

  /// @brief Field m_TransformDispatchData, offset 0x48, size 0x60
  __declspec(property(get = __cordl_internal_get_m_TransformDispatchData, put = __cordl_internal_set_m_TransformDispatchData)) ::UnityEngine::TransformDispatchData m_TransformDispatchData;

  /// @brief Field m_TransformedComponents, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformedComponents,
                      put = __cordl_internal_set_m_TransformedComponents)) ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>
      m_TransformedComponents;

  /// @brief Field m_TypeDataCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TypeDataCallback, put = __cordl_internal_set_m_TypeDataCallback)) ::System::Action_1<::UnityEngine::TypeDispatchData>* m_TypeDataCallback;

  /// @brief Field m_TypeDispatchData, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get_m_TypeDispatchData, put = __cordl_internal_set_m_TypeDispatchData)) ::UnityEngine::TypeDispatchData m_TypeDispatchData;

  /// @brief Field s_TransformDispatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TransformDispatch,
                      put = setStaticF_s_TransformDispatch)) ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                                ::System::Action_1<::UnityEngine::TransformDispatchData>*>* s_TransformDispatch;

  /// @brief Field s_TypeDispatch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TypeDispatch,
                      put = setStaticF_s_TypeDispatch)) ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr,
                                                                           int32_t, int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* s_TypeDispatch;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateDispatchSystemHandle, addr 0x68a1044, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateDispatchSystemHandle();

  /// @brief Method DestroyDispatchSystemHandle, addr 0x68a11a4, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyDispatchSystemHandle(::System::IntPtr ptr);

  /// @brief Method DispatchCallback, addr 0x68a1608, size 0x8, virtual false, abstract: false, final false
  inline void DispatchCallback(::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> components);

  /// @brief Method DispatchCallback, addr 0x68a148c, size 0x17c, virtual false, abstract: false, final false
  inline void DispatchCallback(::UnityEngine::TransformDispatchData data);

  /// @brief Method DispatchCallback, addr 0x68a13e0, size 0xac, virtual false, abstract: false, final false
  inline void DispatchCallback(::UnityEngine::TypeDispatchData data);

  /// @brief Method DispatchTransformChangesAndClear, addr 0x68a1750, size 0xc4, virtual false, abstract: false, final false
  inline void DispatchTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                               ::System::Action_1<::UnityEngine::TransformDispatchData>* callback);

  /// @brief Method DispatchTransformDataChangesAndClear, addr 0x68a1814, size 0x6c, virtual false, abstract: false, final false
  static inline void DispatchTransformDataChangesAndClear(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                          ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                             ::System::Action_1<::UnityEngine::TransformDispatchData>*>* callback,
                                                          ::System::Action_1<::UnityEngine::TransformDispatchData>* param);

  /// @brief Method DispatchTypeChangesAndClear, addr 0x68a16dc, size 0x74, virtual false, abstract: false, final false
  static inline void DispatchTypeChangesAndClear(::System::IntPtr ptr, ::System::Type* type,
                                                 ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                    int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* callback,
                                                 bool sortByInstanceID, bool noScriptingArray, ::System::Action_1<::UnityEngine::TypeDispatchData>* param);

  /// @brief Method DispatchTypeChangesAndClear, addr 0x68a1610, size 0xcc, virtual false, abstract: false, final false
  inline void DispatchTypeChangesAndClear(::System::Type* type, ::System::Action_1<::UnityEngine::TypeDispatchData>* callback, bool sortByInstanceID, bool noScriptingArray);

  /// @brief Method Dispose, addr 0x68a113c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x68a10b4, size 0x88, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableTransformTracking, addr 0x68a1b50, size 0x54, virtual false, abstract: false, final false
  static inline void EnableTransformTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType);

  /// @brief Method EnableTransformTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType);

  /// @brief Method EnableTransformTracking, addr 0x68a1a4c, size 0x104, virtual false, abstract: false, final false
  inline void EnableTransformTracking(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method EnableTypeTracking, addr 0x68a19f8, size 0x54, virtual false, abstract: false, final false
  static inline void EnableTypeTracking(::System::IntPtr ptr, ::System::Type* type, ::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask);

  /// @brief Method EnableTypeTracking, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask);

  /// @brief Method EnableTypeTracking, addr 0x68a18f4, size 0x104, virtual false, abstract: false, final false
  inline void EnableTypeTracking(::UnityEngine::ObjectDispatcher_TypeTrackingFlags typeTrackingMask, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method Finalize, addr 0x68a106c, size 0x48, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetTransformChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline ::UnityEngine::TransformDispatchData GetTransformChangesAndClear(::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType, ::Unity::Collections::Allocator allocator);

  /// @brief Method GetTransformChangesAndClear, addr 0x68a18bc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::TransformDispatchData GetTransformChangesAndClear(::System::Type* type, ::UnityEngine::ObjectDispatcher_TransformTrackingType trackingType,
                                                                          ::Unity::Collections::Allocator allocator);

  /// @brief Method GetTypeChangesAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::UnityEngine::TypeDispatchData GetTypeChangesAndClear(::Unity::Collections::Allocator allocator, bool sortByInstanceID, bool noScriptingArray);

  /// @brief Method GetTypeChangesAndClear, addr 0x68a1880, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TypeDispatchData GetTypeChangesAndClear(::System::Type* type, ::Unity::Collections::Allocator allocator, bool sortByInstanceID, bool noScriptingArray);

  static inline ::UnityEngine::ObjectDispatcher* New_ctor();

  /// @brief Method ValidateComponentTypeAndThrow, addr 0x68a130c, size 0xd4, virtual false, abstract: false, final false
  inline void ValidateComponentTypeAndThrow(::System::Type* type);

  /// @brief Method ValidateSystemHandleAndThrow, addr 0x68a11e0, size 0x58, virtual false, abstract: false, final false
  inline void ValidateSystemHandleAndThrow();

  /// @brief Method ValidateTypeAndThrow, addr 0x68a1238, size 0xd4, virtual false, abstract: false, final false
  inline void ValidateTypeAndThrow(::System::Type* type);

  constexpr ::Unity::Collections::Allocator const& __cordl_internal_get_m_DispatchAllocator() const;

  constexpr ::Unity::Collections::Allocator& __cordl_internal_get_m_DispatchAllocator();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>* const& __cordl_internal_get_m_TransformComponentCallback() const;

  constexpr ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>*& __cordl_internal_get_m_TransformComponentCallback();

  constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>* const& __cordl_internal_get_m_TransformDataCallback() const;

  constexpr ::System::Action_1<::UnityEngine::TransformDispatchData>*& __cordl_internal_get_m_TransformDataCallback();

  constexpr ::UnityEngine::TransformDispatchData const& __cordl_internal_get_m_TransformDispatchData() const;

  constexpr ::UnityEngine::TransformDispatchData& __cordl_internal_get_m_TransformDispatchData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get_m_TransformedComponents() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>& __cordl_internal_get_m_TransformedComponents();

  constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>* const& __cordl_internal_get_m_TypeDataCallback() const;

  constexpr ::System::Action_1<::UnityEngine::TypeDispatchData>*& __cordl_internal_get_m_TypeDataCallback();

  constexpr ::UnityEngine::TypeDispatchData const& __cordl_internal_get_m_TypeDispatchData() const;

  constexpr ::UnityEngine::TypeDispatchData& __cordl_internal_get_m_TypeDispatchData();

  constexpr void __cordl_internal_set_m_DispatchAllocator(::Unity::Collections::Allocator value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_TransformComponentCallback(::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>* value);

  constexpr void __cordl_internal_set_m_TransformDataCallback(::System::Action_1<::UnityEngine::TransformDispatchData>* value);

  constexpr void __cordl_internal_set_m_TransformDispatchData(::UnityEngine::TransformDispatchData value);

  constexpr void __cordl_internal_set_m_TransformedComponents(::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> value);

  constexpr void __cordl_internal_set_m_TypeDataCallback(::System::Action_1<::UnityEngine::TypeDispatchData>* value);

  constexpr void __cordl_internal_set_m_TypeDispatchData(::UnityEngine::TypeDispatchData value);

  /// @brief Method .ctor, addr 0x68a0e5c, size 0x1e8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                   ::System::Action_1<::UnityEngine::TransformDispatchData>*>*
  getStaticF_s_TransformDispatch();

  static inline ::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t,
                                   ::System::Action_1<::UnityEngine::TypeDispatchData>*>*
  getStaticF_s_TypeDispatch();

  /// @brief Method get_valid, addr 0x68a0e4c, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_TransformDispatch(::System::Action_8<::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                       ::System::Action_1<::UnityEngine::TransformDispatchData>*>* value);

  static inline void setStaticF_s_TypeDispatch(::System::Action_6<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, ::System::IntPtr, ::System::IntPtr, int32_t,
                                                                  int32_t, ::System::Action_1<::UnityEngine::TypeDispatchData>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDispatcher(ObjectDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDispatcher(ObjectDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10244 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_DispatchAllocator, offset: 0x18, size: 0x4, def value: None
  ::Unity::Collections::Allocator ___m_DispatchAllocator;

  /// @brief Field m_TypeDispatchData, offset: 0x20, size: 0x28, def value: None
  ::UnityEngine::TypeDispatchData ___m_TypeDispatchData;

  /// @brief Field m_TransformDispatchData, offset: 0x48, size: 0x60, def value: None
  ::UnityEngine::TransformDispatchData ___m_TransformDispatchData;

  /// @brief Field m_TransformedComponents, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> ___m_TransformedComponents;

  /// @brief Field m_TypeDataCallback, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::TypeDispatchData>* ___m_TypeDataCallback;

  /// @brief Field m_TransformDataCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::TransformDispatchData>* ___m_TransformDataCallback;

  /// @brief Field m_TransformComponentCallback, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>>* ___m_TransformComponentCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_DispatchAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TypeDispatchData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformDispatchData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformedComponents) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TypeDataCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformDataCallback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ObjectDispatcher, ___m_TransformComponentCallback) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ObjectDispatcher, 0xc8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher_TransformTrackingType, "UnityEngine", "ObjectDispatcher/TransformTrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher_TypeTrackingFlags, "UnityEngine", "ObjectDispatcher/TypeTrackingFlags");
NEED_NO_BOX(::UnityEngine::ObjectDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher*, "UnityEngine", "ObjectDispatcher");
NEED_NO_BOX(::UnityEngine::ObjectDispatcher___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ObjectDispatcher___c*, "UnityEngine", "ObjectDispatcher/<>c");
