#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/UnifiedRayTracingException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__UnifiedRayTracingError_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnifiedRayTracingException)
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct UnifiedRayTracingError;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class UnifiedRayTracingException;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*, "UnityEngine.Rendering.UnifiedRayTracing", "UnifiedRayTracingException");
// Dependencies System.Exception, UnityEngine.Rendering.UnifiedRayTracing.UnifiedRayTracingError
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.UnifiedRayTracingException
class CORDL_TYPE UnifiedRayTracingException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field <errorCode>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__errorCode_k__BackingField,
                      put = __cordl_internal_set__errorCode_k__BackingField)) ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError _errorCode_k__BackingField;

  __declspec(property(get = get_errorCode, put = set_errorCode)) ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError errorCode;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException* New_ctor(::StringW message, ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError errorCode);

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError const& __cordl_internal_get__errorCode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError& __cordl_internal_get__errorCode_k__BackingField();

  constexpr void __cordl_internal_set__errorCode_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError value);

  /// @brief Method .ctor, addr 0x6e0e450, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError errorCode);

  /// [CompilerGenerated]
  /// @brief Method get_errorCode, addr 0x6e0e4c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError get_errorCode();

  /// [CompilerGenerated]
  /// @brief Method set_errorCode, addr 0x6e0e4cc, size 0x8, virtual false, abstract: false, final false
  inline void set_errorCode(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnifiedRayTracingException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnifiedRayTracingException", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnifiedRayTracingException(UnifiedRayTracingException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnifiedRayTracingException", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnifiedRayTracingException(UnifiedRayTracingException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20506 };

  /// [CompilerGenerated]
  /// @brief Field <errorCode>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError ____errorCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException, ____errorCode_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException) == 0x90, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
