#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PersistentSingleton_1)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class PersistentSingleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::PersistentSingleton_1);
// Type: ::PersistentSingleton`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13880))
// CS Name: ::PersistentSingleton`1<T>*
class CORDL_TYPE PersistentSingleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) T _instance;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field _applicationIsQuitting, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__applicationIsQuitting, put = setStaticF__applicationIsQuitting)) bool _applicationIsQuitting;

  static inline void setStaticF__instance(T value);

  static inline T getStaticF__instance();

  static inline void setStaticF__lock(::System::Object* value);

  static inline ::System::Object* getStaticF__lock();

  static inline void setStaticF__applicationIsQuitting(bool value);

  static inline bool getStaticF__applicationIsQuitting();

  /// @brief Method get_instance addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T get_instance();

  /// @brief Method TouchInstance addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void TouchInstance();

  /// @brief Method get_IsSingletonAvailable addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool get_IsSingletonAvailable();

  /// @brief Method OnEnable addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::PersistentSingleton_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentSingleton_1(PersistentSingleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentSingleton_1(PersistentSingleton_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentSingleton_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PersistentSingleton_1, "", "PersistentSingleton`1");
