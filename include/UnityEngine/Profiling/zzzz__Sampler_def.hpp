#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Sampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Sampler)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Profiling {
class Recorder;
}
// Forward declare root types
namespace UnityEngine::Profiling {
class Sampler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Profiling::Sampler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Profiling::Sampler*, "UnityEngine.Profiling", "Sampler");
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Sampler
class CORDL_TYPE Sampler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field s_InvalidSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvalidSampler, put = setStaticF_s_InvalidSampler)) ::UnityEngine::Profiling::Sampler* s_InvalidSampler;

  /// @brief Method GetRecorder, addr 0x6af84cc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Profiling::Recorder* GetRecorder();

  static inline ::UnityEngine::Profiling::Sampler* New_ctor();

  static inline ::UnityEngine::Profiling::Sampler* New_ctor(::System::IntPtr ptr);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6af84b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6af84b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::Profiling::Sampler* getStaticF_s_InvalidSampler();

  /// @brief Method get_isValid, addr 0x6af84bc, size 0x10, virtual false, abstract: false, final false
  inline bool get_isValid();

  static inline void setStaticF_s_InvalidSampler(::UnityEngine::Profiling::Sampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sampler(Sampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sampler(Sampler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10402 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Profiling::Sampler, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Profiling::Sampler) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Profiling
