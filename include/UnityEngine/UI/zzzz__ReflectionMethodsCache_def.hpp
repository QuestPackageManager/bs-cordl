#pragma once
// IWYU pragma private; include "UnityEngine/UI/ReflectionMethodsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionMethodsCache)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_Raycast2DCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_Raycast3DCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_RaycastAllCallback;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class ReflectionMethodsCache;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_Raycast2DCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_Raycast3DCallback;
}
namespace UnityEngine::UI {
class ReflectionMethodsCache_RaycastAllCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
class CORDL_TYPE ReflectionMethodsCache_Raycast3DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad0fc0, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad10e4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::UnityEngine::RaycastHit> hit, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad0f80, size 0x40, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Ray r, ::ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad0ef4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_Raycast3DCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_Raycast3DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_Raycast3DCallback(ReflectionMethodsCache_Raycast3DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_Raycast3DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_Raycast3DCallback(ReflectionMethodsCache_Raycast3DCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
class CORDL_TYPE ReflectionMethodsCache_RaycastAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad11d8, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad12c8, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad119c, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad1110, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_RaycastAllCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_RaycastAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_RaycastAllCallback(ReflectionMethodsCache_RaycastAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_RaycastAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_RaycastAllCallback(ReflectionMethodsCache_RaycastAllCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
class CORDL_TYPE ReflectionMethodsCache_GetRaycastNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad139c, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad1490, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad1360, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad12d4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_GetRaycastNonAllocCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRaycastNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_GetRaycastNonAllocCallback(ReflectionMethodsCache_GetRaycastNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRaycastNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_GetRaycastNonAllocCallback(ReflectionMethodsCache_GetRaycastNonAllocCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
class CORDL_TYPE ReflectionMethodsCache_Raycast2DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad1558, size 0x104, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad165c, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad1544, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad14b8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_Raycast2DCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_Raycast2DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_Raycast2DCallback(ReflectionMethodsCache_Raycast2DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_Raycast2DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_Raycast2DCallback(ReflectionMethodsCache_Raycast2DCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
class CORDL_TYPE ReflectionMethodsCache_GetRayIntersectionAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad175c, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad184c, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad1720, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad1694, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_GetRayIntersectionAllCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRayIntersectionAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_GetRayIntersectionAllCallback(ReflectionMethodsCache_GetRayIntersectionAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRayIntersectionAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_GetRayIntersectionAllCallback(ReflectionMethodsCache_GetRayIntersectionAllCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.MulticastDelegate
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
class CORDL_TYPE ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4ad1920, size 0xf4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4ad1a14, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4ad18e4, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i);

  static inline ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ad1858, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback(ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback(ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ReflectionMethodsCache
class CORDL_TYPE ReflectionMethodsCache : public ::System::Object {
public:
  // Declarations
  using GetRayIntersectionAllCallback = ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback;

  using GetRayIntersectionAllNonAllocCallback = ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback;

  using GetRaycastNonAllocCallback = ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback;

  using Raycast2DCallback = ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback;

  using Raycast3DCallback = ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback;

  using RaycastAllCallback = ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback;

  /// @brief Field getRayIntersectionAll, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_getRayIntersectionAll,
                      put = __cordl_internal_set_getRayIntersectionAll)) ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_getRayIntersectionAllNonAlloc,
                      put = __cordl_internal_set_getRayIntersectionAllNonAlloc)) ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;

  /// @brief Field getRaycastNonAlloc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_getRaycastNonAlloc,
                      put = __cordl_internal_set_getRaycastNonAlloc)) ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* getRaycastNonAlloc;

  /// @brief Field raycast2D, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast2D, put = __cordl_internal_set_raycast2D)) ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* raycast2D;

  /// @brief Field raycast3D, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast3D, put = __cordl_internal_set_raycast3D)) ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* raycast3D;

  /// @brief Field raycast3DAll, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_raycast3DAll, put = __cordl_internal_set_raycast3DAll)) ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* raycast3DAll;

  /// @brief Field s_ReflectionMethodsCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReflectionMethodsCache, put = setStaticF_s_ReflectionMethodsCache)) ::UnityEngine::UI::ReflectionMethodsCache* s_ReflectionMethodsCache;

  static inline ::UnityEngine::UI::ReflectionMethodsCache* New_ctor();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* const& __cordl_internal_get_getRayIntersectionAll() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*& __cordl_internal_get_getRayIntersectionAll();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* const& __cordl_internal_get_getRayIntersectionAllNonAlloc() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*& __cordl_internal_get_getRayIntersectionAllNonAlloc();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* const& __cordl_internal_get_getRaycastNonAlloc() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*& __cordl_internal_get_getRaycastNonAlloc();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* const& __cordl_internal_get_raycast2D() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*& __cordl_internal_get_raycast2D();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* const& __cordl_internal_get_raycast3D() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*& __cordl_internal_get_raycast3D();

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* const& __cordl_internal_get_raycast3DAll() const;

  constexpr ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*& __cordl_internal_get_raycast3DAll();

  constexpr void __cordl_internal_set_getRayIntersectionAll(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* value);

  constexpr void __cordl_internal_set_getRayIntersectionAllNonAlloc(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* value);

  constexpr void __cordl_internal_set_getRaycastNonAlloc(::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* value);

  constexpr void __cordl_internal_set_raycast2D(::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* value);

  constexpr void __cordl_internal_set_raycast3D(::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* value);

  constexpr void __cordl_internal_set_raycast3DAll(::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* value);

  /// @brief Method .ctor, addr 0x4ad026c, size 0xc14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::ReflectionMethodsCache* getStaticF_s_ReflectionMethodsCache();

  /// @brief Method get_Singleton, addr 0x4ad0e80, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::ReflectionMethodsCache* get_Singleton();

  static inline void setStaticF_s_ReflectionMethodsCache(::UnityEngine::UI::ReflectionMethodsCache* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache(ReflectionMethodsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache(ReflectionMethodsCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15156 };

  /// @brief Field raycast3D, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback* ___raycast3D;

  /// @brief Field raycast3DAll, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback* ___raycast3DAll;

  /// @brief Field getRaycastNonAlloc, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback* ___getRaycastNonAlloc;

  /// @brief Field raycast2D, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback* ___raycast2D;

  /// @brief Field getRayIntersectionAll, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback* ___getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback* ___getRayIntersectionAllNonAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3D) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3DAll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRaycastNonAlloc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast2D) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAll) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAllNonAlloc) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache*, "UnityEngine.UI", "ReflectionMethodsCache");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_GetRaycastNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRaycastNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_Raycast2DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_Raycast3DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast3DCallback");
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache_RaycastAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");
