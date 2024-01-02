#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionMethodsCache)
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__RaycastAllCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
class __ReflectionMethodsCache__GetRayIntersectionAllCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__GetRaycastNonAllocCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast2DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__Raycast3DCallback;
}
namespace UnityEngine::UI {
class __ReflectionMethodsCache__RaycastAllCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ReflectionMethodsCache);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback);
MARK_REF_PTR_T(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback);
// Type: ::Raycast3DCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13134))
// CS Name: ::ReflectionMethodsCache::Raycast3DCallback*
class CORDL_TYPE __ReflectionMethodsCache__Raycast3DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8e5dc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8e6a0, size 0x40, virtual true, abstract: false, final false
  inline bool Invoke(::UnityEngine::Ray r, ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8e6e0, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ByRef<::UnityEngine::RaycastHit> hit, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8e800, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::UnityEngine::RaycastHit> hit, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast3DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__Raycast3DCallback(__ReflectionMethodsCache__Raycast3DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast3DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__Raycast3DCallback(__ReflectionMethodsCache__Raycast3DCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__Raycast3DCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::RaycastAllCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13135))
// CS Name: ::ReflectionMethodsCache::RaycastAllCallback*
class CORDL_TYPE __ReflectionMethodsCache__RaycastAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8e82c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8e8f0, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8e92c, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8ea18, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__RaycastAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__RaycastAllCallback(__ReflectionMethodsCache__RaycastAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__RaycastAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__RaycastAllCallback(__ReflectionMethodsCache__RaycastAllCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__RaycastAllCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRaycastNonAllocCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13136))
// CS Name: ::ReflectionMethodsCache::GetRaycastNonAllocCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRaycastNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8ea24, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8eae8, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8eb24, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8ec14, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRaycastNonAllocCallback(__ReflectionMethodsCache__GetRaycastNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRaycastNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRaycastNonAllocCallback(__ReflectionMethodsCache__GetRaycastNonAllocCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRaycastNonAllocCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::Raycast2DCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13137))
// CS Name: ::ReflectionMethodsCache::Raycast2DCallback*
class CORDL_TYPE __ReflectionMethodsCache__Raycast2DCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8ec3c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8ed00, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D Invoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8ed14, size 0xfc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8ee10, size 0x38, virtual true, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast2DCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__Raycast2DCallback(__ReflectionMethodsCache__Raycast2DCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__Raycast2DCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__Raycast2DCallback(__ReflectionMethodsCache__Raycast2DCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__Raycast2DCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRayIntersectionAllCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13138))
// CS Name: ::ReflectionMethodsCache::GetRayIntersectionAllCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRayIntersectionAllCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8ee48, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8ef0c, size 0x3c, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> Invoke(::UnityEngine::Ray r, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8ef48, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, float_t f, int32_t i, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8f034, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRayIntersectionAllCallback(__ReflectionMethodsCache__GetRayIntersectionAllCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRayIntersectionAllCallback(__ReflectionMethodsCache__GetRayIntersectionAllCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRayIntersectionAllCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: ::GetRayIntersectionAllNonAllocCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13139))
// CS Name: ::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*
class CORDL_TYPE __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d8f040, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d8f104, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i);

  /// @brief Method BeginInvoke, addr 0x2d8f140, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t f, int32_t i,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2d8f230, size 0x28, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback(__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::ReflectionMethodsCache
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13140))
// CS Name: ::UnityEngine.UI::ReflectionMethodsCache*
class CORDL_TYPE ReflectionMethodsCache : public ::System::Object {
public:
  // Declarations
  using GetRayIntersectionAllNonAllocCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback;

  using GetRayIntersectionAllCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback;

  using Raycast2DCallback = ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback;

  using GetRaycastNonAllocCallback = ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback;

  using RaycastAllCallback = ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback;

  using Raycast3DCallback = ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback;

  /// @brief Field raycast3D, offset 0x10, size 0x8
  __declspec(property(get = __get_raycast3D, put = __set_raycast3D))::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* raycast3D;

  /// @brief Field raycast3DAll, offset 0x18, size 0x8
  __declspec(property(get = __get_raycast3DAll, put = __set_raycast3DAll))::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* raycast3DAll;

  /// @brief Field getRaycastNonAlloc, offset 0x20, size 0x8
  __declspec(property(get = __get_getRaycastNonAlloc, put = __set_getRaycastNonAlloc))::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* getRaycastNonAlloc;

  /// @brief Field raycast2D, offset 0x28, size 0x8
  __declspec(property(get = __get_raycast2D, put = __set_raycast2D))::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* raycast2D;

  /// @brief Field getRayIntersectionAll, offset 0x30, size 0x8
  __declspec(property(get = __get_getRayIntersectionAll, put = __set_getRayIntersectionAll))::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset 0x38, size 0x8
  __declspec(property(get = __get_getRayIntersectionAllNonAlloc,
                      put = __set_getRayIntersectionAllNonAlloc))::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;

  /// @brief Field s_ReflectionMethodsCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ReflectionMethodsCache, put = setStaticF_s_ReflectionMethodsCache))::UnityEngine::UI::ReflectionMethodsCache* s_ReflectionMethodsCache;

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*& __get_raycast3D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*> const& __get_raycast3D() const;

  constexpr void __set_raycast3D(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* value);

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*& __get_raycast3DAll();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*> const& __get_raycast3DAll() const;

  constexpr void __set_raycast3DAll(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* value);

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*& __get_getRaycastNonAlloc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*> const& __get_getRaycastNonAlloc() const;

  constexpr void __set_getRaycastNonAlloc(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* value);

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*& __get_raycast2D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*> const& __get_raycast2D() const;

  constexpr void __set_raycast2D(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* value);

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*& __get_getRayIntersectionAll();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*> const& __get_getRayIntersectionAll() const;

  constexpr void __set_getRayIntersectionAll(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* value);

  constexpr ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*& __get_getRayIntersectionAllNonAlloc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*> const& __get_getRayIntersectionAllNonAlloc() const;

  constexpr void __set_getRayIntersectionAllNonAlloc(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* value);

  static inline void setStaticF_s_ReflectionMethodsCache(::UnityEngine::UI::ReflectionMethodsCache* value);

  static inline ::UnityEngine::UI::ReflectionMethodsCache* getStaticF_s_ReflectionMethodsCache();

  static inline ::UnityEngine::UI::ReflectionMethodsCache* New_ctor();

  /// @brief Method .ctor, addr 0x2d8d94c, size 0xc14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Singleton, addr 0x2d8e560, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::ReflectionMethodsCache* get_Singleton();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMethodsCache(ReflectionMethodsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMethodsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMethodsCache(ReflectionMethodsCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMethodsCache();

public:
  /// @brief Field raycast3D, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback* ___raycast3D;

  /// @brief Field raycast3DAll, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback* ___raycast3DAll;

  /// @brief Field getRaycastNonAlloc, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback* ___getRaycastNonAlloc;

  /// @brief Field raycast2D, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback* ___raycast2D;

  /// @brief Field getRayIntersectionAll, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback* ___getRayIntersectionAll;

  /// @brief Field getRayIntersectionAllNonAlloc, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback* ___getRayIntersectionAllNonAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ReflectionMethodsCache, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3D) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast3DAll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRaycastNonAlloc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___raycast2D) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAll) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ReflectionMethodsCache, ___getRayIntersectionAllNonAlloc) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache*, "UnityEngine.UI", "ReflectionMethodsCache");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRayIntersectionAllNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__GetRaycastNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRaycastNonAllocCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__Raycast2DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__Raycast3DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast3DCallback");
NEED_NO_BOX(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ReflectionMethodsCache__RaycastAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");
