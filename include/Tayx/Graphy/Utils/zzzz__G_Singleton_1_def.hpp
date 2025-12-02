#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/G_Singleton_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_Singleton_1)
namespace System {
class Object;
}
// Forward declare root types
namespace Tayx::Graphy::Utils {
template <typename T> class G_Singleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Tayx::Graphy::Utils::G_Singleton_1);
// Dependencies UnityEngine.MonoBehaviour
namespace Tayx::Graphy::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Tayx.Graphy.Utils.G_Singleton`1<T>
class CORDL_TYPE G_Singleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) T _instance;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lock, put = setStaticF__lock)) ::System::Object* _lock;

  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Tayx::Graphy::Utils::G_Singleton_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline T getStaticF__instance();

  static inline ::System::Object* getStaticF__lock();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_Instance();

  static inline void setStaticF__instance(T value);

  static inline void setStaticF__lock(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_Singleton_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_Singleton_1(G_Singleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_Singleton_1(G_Singleton_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tayx::Graphy::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Tayx::Graphy::Utils::G_Singleton_1, "Tayx.Graphy.Utils", "G_Singleton`1");
