#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Utils)
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class Utils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::Utils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::Utils*, "UnityEngine.Rendering.UnifiedRayTracing", "Utils");
// Dependencies System.IComparable, System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method CheckArg, addr 0x6e08c08, size 0x4c, virtual false, abstract: false, final false
  static inline void CheckArg(bool condition, ::StringW message);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method CheckArgIsNotNull, addr 0x6e08bbc, size 0x4c, virtual false, abstract: false, final false
  static inline void CheckArgIsNotNull(::System::Object* obj, ::StringW argName);

  /// [Conditional("UNITY_ASSERTIONS")]
  /// @brief Method CheckArgRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IComparable*>)
  static inline void CheckArgRange(T value, T minIncluded, T maxExcluded, ::StringW argName);

  /// @brief Method Destroy, addr 0x6e08b30, size 0x8c, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20480 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::Utils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
