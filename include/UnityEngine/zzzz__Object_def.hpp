#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Object)
namespace UnityEngine {
class Transform;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct HideFlags;
}
// Forward declare root types
namespace UnityEngine {
class Object;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Object);
// Type: UnityEngine::Object
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10200))
// CS Name: ::UnityEngine::Object*
class CORDL_TYPE Object : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CachedPtr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_CachedPtr, put = __set_m_CachedPtr)) void* m_CachedPtr;

  /// @brief Field OffsetOfInstanceIDInCPlusPlusObject, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_OffsetOfInstanceIDInCPlusPlusObject, put = setStaticF_OffsetOfInstanceIDInCPlusPlusObject)) int32_t OffsetOfInstanceIDInCPlusPlusObject;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_hideFlags, put = set_hideFlags))::UnityEngine::HideFlags hideFlags;

  constexpr void*& __get_m_CachedPtr();

  constexpr void* const& __get_m_CachedPtr() const;

  constexpr void __set_m_CachedPtr(void* value);

  static inline void setStaticF_OffsetOfInstanceIDInCPlusPlusObject(int32_t value);

  static inline int32_t getStaticF_OffsetOfInstanceIDInCPlusPlusObject();

  /// @brief Method GetInstanceID addr 0x2cc4774 size 0x134 virtual false final false
  inline int32_t GetInstanceID();

  /// @brief Method GetHashCode addr 0x2ccf000 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2ccf008 size 0xfc virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method op_Implicit addr 0x2ccf208 size 0x64 virtual false final false
  static inline bool op_Implicit_bool(::UnityEngine::Object* exists);

  /// @brief Method CompareBaseObjects addr 0x2ccf168 size 0xa0 virtual false final false
  static inline bool CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs);

  /// @brief Method EnsureRunningOnMainThread addr 0x2ccf2c8 size 0xc0 virtual false final false
  inline void EnsureRunningOnMainThread();

  /// @brief Method IsNativeObjectAlive addr 0x2ccf26c size 0x5c virtual false final false
  static inline bool IsNativeObjectAlive(::UnityEngine::Object* o);

  /// @brief Method GetCachedPtr addr 0x2ccf3b0 size 0x8 virtual false final false
  inline void* GetCachedPtr();

  /// @brief Method get_name addr 0x2ccf3b8 size 0x74 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2ccf468 size 0x84 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method Instantiate addr 0x2ccf530 size 0x1b8 virtual false final false
  static inline ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate addr 0x2ccf84c size 0x1a8 virtual false final false
  static inline ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate addr 0x2ccfa9c size 0xf4 virtual false final false
  static inline ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original);

  /// @brief Method Instantiate addr 0x2ccfbcc size 0x68 virtual false final false
  static inline ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate addr 0x2ccfc34 size 0x14c virtual false final false
  static inline ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Instantiate(T original);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent);

  /// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Instantiate(T original, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Destroy addr 0x2ccfdd4 size 0x4c virtual false final false
  static inline void Destroy(::UnityEngine::Object* obj, float_t t);

  /// @brief Method Destroy addr 0x2ccfe20 size 0x78 virtual false final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method DestroyImmediate addr 0x2ccfe98 size 0x44 virtual false final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj, bool allowDestroyingAssets);

  /// @brief Method DestroyImmediate addr 0x2ccfedc size 0x78 virtual false final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj);

  /// @brief Method FindObjectsOfType addr 0x2ccff54 size 0x78 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfType(::System::Type* type);

  /// @brief Method FindObjectsOfType addr 0x2ccffcc size 0x44 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfType(::System::Type* type, bool includeInactive);

  /// @brief Method DontDestroyOnLoad addr 0x2cd0010 size 0x3c virtual false final false
  static inline void DontDestroyOnLoad(::UnityEngine::Object* target);

  /// @brief Method get_hideFlags addr 0x2cd004c size 0x3c virtual false final false
  inline ::UnityEngine::HideFlags get_hideFlags();

  /// @brief Method set_hideFlags addr 0x2cd0088 size 0x44 virtual false final false
  inline void set_hideFlags(::UnityEngine::HideFlags value);

  /// @brief Method DestroyObject addr 0x2cd00cc size 0x84 virtual false final false
  static inline void DestroyObject(::UnityEngine::Object* obj, float_t t);

  /// @brief Method DestroyObject addr 0x2cd0150 size 0x78 virtual false final false
  static inline void DestroyObject(::UnityEngine::Object* obj);

  /// @brief Method FindSceneObjectsOfType addr 0x2cd01c8 size 0x54 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindSceneObjectsOfType(::System::Type* type);

  /// @brief Method FindObjectsOfTypeIncludingAssets addr 0x2cd021c size 0x3c virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfTypeIncludingAssets(::System::Type* type);

  /// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindObjectsOfType();

  /// @brief Method FindObjectsOfType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindObjectsOfType(bool includeInactive);

  /// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T FindObjectOfType();

  /// @brief Method FindObjectOfType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T FindObjectOfType(bool includeInactive);

  /// @brief Method FindObjectsOfTypeAll addr 0x2cd0258 size 0x8 virtual false final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> FindObjectsOfTypeAll(::System::Type* type);

  /// @brief Method CheckNullArgument addr 0x2ccf6e8 size 0x54 virtual false final false
  static inline void CheckNullArgument(::System::Object* arg, ::StringW message);

  /// @brief Method FindObjectOfType addr 0x2cd0260 size 0x98 virtual false final false
  static inline ::UnityEngine::Object* FindObjectOfType(::System::Type* type);

  /// @brief Method FindObjectOfType addr 0x2cd02f8 size 0xa4 virtual false final false
  static inline ::UnityEngine::Object* FindObjectOfType(::System::Type* type, bool includeInactive);

  /// @brief Method ToString addr 0x2cd039c size 0x74 virtual true final false
  inline ::StringW ToString();

  /// @brief Method op_Equality addr 0x2ccf104 size 0x64 virtual false final false
  static inline bool op_Equality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  /// @brief Method op_Inequality addr 0x2cc4704 size 0x70 virtual false final false
  static inline bool op_Inequality(::UnityEngine::Object* x, ::UnityEngine::Object* y);

  /// @brief Method GetOffsetOfInstanceIDInCPlusPlusObject addr 0x2ccefd8 size 0x28 virtual false final false
  static inline int32_t GetOffsetOfInstanceIDInCPlusPlusObject();

  /// @brief Method CurrentThreadIsMainThread addr 0x2ccf388 size 0x28 virtual false final false
  static inline bool CurrentThreadIsMainThread();

  /// @brief Method Internal_CloneSingle addr 0x2ccfb90 size 0x3c virtual false final false
  static inline ::UnityEngine::Object* Internal_CloneSingle(::UnityEngine::Object* data);

  /// @brief Method Internal_CloneSingleWithParent addr 0x2ccfd80 size 0x54 virtual false final false
  static inline ::UnityEngine::Object* Internal_CloneSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, bool worldPositionStays);

  /// @brief Method Internal_InstantiateSingle addr 0x2ccf73c size 0x98 virtual false final false
  static inline ::UnityEngine::Object* Internal_InstantiateSingle(::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method Internal_InstantiateSingleWithParent addr 0x2ccf9f4 size 0xa8 virtual false final false
  static inline ::UnityEngine::Object* Internal_InstantiateSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method ToString addr 0x2cd0410 size 0x3c virtual false final false
  static inline ::StringW ToString(::UnityEngine::Object* obj);

  /// @brief Method GetName addr 0x2ccf42c size 0x3c virtual false final false
  static inline ::StringW GetName(::UnityEngine::Object* obj);

  /// @brief Method IsPersistent addr 0x2cd04fc size 0x3c virtual false final false
  static inline bool IsPersistent(::UnityEngine::Object* obj);

  /// @brief Method SetName addr 0x2ccf4ec size 0x44 virtual false final false
  static inline void SetName(::UnityEngine::Object* obj, ::StringW name);

  /// @brief Method DoesObjectWithInstanceIDExist addr 0x2cd0538 size 0x3c virtual false final false
  static inline bool DoesObjectWithInstanceIDExist(int32_t instanceID);

  /// @brief Method FindObjectFromInstanceID addr 0x2cd0574 size 0x3c virtual false final false
  static inline ::UnityEngine::Object* FindObjectFromInstanceID(int32_t instanceID);

  /// @brief Method ForceLoadFromInstanceID addr 0x2cd05b0 size 0x3c virtual false final false
  static inline ::UnityEngine::Object* ForceLoadFromInstanceID(int32_t instanceID);

  static inline ::UnityEngine::Object* New_ctor();

  /// @brief Method .ctor addr 0x2ccec78 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Internal_InstantiateSingle_Injected addr 0x2cd044c size 0x54 virtual false final false
  static inline ::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* data, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method Internal_InstantiateSingleWithParent_Injected addr 0x2cd04a0 size 0x5c virtual false final false
  static inline ::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ByRef<::UnityEngine::Vector3> pos,
                                                                                     ByRef<::UnityEngine::Quaternion> rot);

  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Object(Object&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Object", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Object(Object const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Object();

public:
  /// @brief Field m_CachedPtr, offset: 0x10, size: 0x8, def value: None
  void* ___m_CachedPtr;

  /// @brief Field objectIsNullMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString objectIsNullMessage{ u"The Object you want to instantiate is null." };

  /// @brief Field cloneDestroyedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString cloneDestroyedMessage{ u"Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Object, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
