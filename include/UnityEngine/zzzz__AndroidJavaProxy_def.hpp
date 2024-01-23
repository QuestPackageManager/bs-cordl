#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJavaProxy)
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class GlobalJavaObjectRef;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaProxy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJavaProxy);
// Type: UnityEngine::AndroidJavaProxy
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14912))
// CS Name: ::UnityEngine::AndroidJavaProxy*
class CORDL_TYPE AndroidJavaProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field javaInterface, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_javaInterface, put = __cordl_internal_set_javaInterface))::UnityEngine::AndroidJavaClass* javaInterface;

  /// @brief Field proxyObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_proxyObject, put = __cordl_internal_set_proxyObject)) void* proxyObject;

  /// @brief Field s_JavaLangSystemClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_JavaLangSystemClass, put = setStaticF_s_JavaLangSystemClass))::UnityEngine::GlobalJavaObjectRef* s_JavaLangSystemClass;

  /// @brief Field s_HashCodeMethodID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_HashCodeMethodID, put = setStaticF_s_HashCodeMethodID)) void* s_HashCodeMethodID;

  constexpr ::UnityEngine::AndroidJavaClass*& __cordl_internal_get_javaInterface();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AndroidJavaClass*> const& __cordl_internal_get_javaInterface() const;

  constexpr void __cordl_internal_set_javaInterface(::UnityEngine::AndroidJavaClass* value);

  constexpr void*& __cordl_internal_get_proxyObject();

  constexpr void* const& __cordl_internal_get_proxyObject() const;

  constexpr void __cordl_internal_set_proxyObject(void* value);

  static inline void setStaticF_s_JavaLangSystemClass(::UnityEngine::GlobalJavaObjectRef* value);

  static inline ::UnityEngine::GlobalJavaObjectRef* getStaticF_s_JavaLangSystemClass();

  static inline void setStaticF_s_HashCodeMethodID(void* value);

  static inline void* getStaticF_s_HashCodeMethodID();

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::StringW javaInterface);

  /// @brief Method .ctor, addr 0x2c84130, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW javaInterface);

  static inline ::UnityEngine::AndroidJavaProxy* New_ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  /// @brief Method .ctor, addr 0x2c841fc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AndroidJavaClass* javaInterface);

  /// @brief Method Finalize, addr 0x2c84268, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Invoke, addr 0x2c84300, size 0x728, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Invoke, addr 0x2c855d0, size 0x164, virtual true, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* Invoke(::StringW methodName, ::ArrayW<::UnityEngine::AndroidJavaObject*, ::Array<::UnityEngine::AndroidJavaObject*>*> javaArgs);

  /// @brief Method equals, addr 0x2c86098, size 0xb8, virtual true, abstract: false, final false
  inline bool equals(::UnityEngine::AndroidJavaObject* obj);

  /// @brief Method hashCode, addr 0x2c861f0, size 0xb0, virtual true, abstract: false, final false
  inline int32_t hashCode();

  /// @brief Method toString, addr 0x2c862a0, size 0x64, virtual true, abstract: false, final false
  inline ::StringW toString();

  /// @brief Method GetProxyObject, addr 0x2c86304, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::AndroidJavaObject* GetProxyObject();

  /// @brief Method GetRawProxy, addr 0x2c85380, size 0x144, virtual false, abstract: false, final false
  inline void* GetRawProxy();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJavaProxy(AndroidJavaProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJavaProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJavaProxy(AndroidJavaProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJavaProxy();

public:
  /// @brief Field javaInterface, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AndroidJavaClass* ___javaInterface;

  /// @brief Field proxyObject, offset: 0x18, size: 0x8, def value: None
  void* ___proxyObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJavaProxy, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaProxy, ___javaInterface) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJavaProxy, ___proxyObject) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJavaProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaProxy*, "UnityEngine", "AndroidJavaProxy");
