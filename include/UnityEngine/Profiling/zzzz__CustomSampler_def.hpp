#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/CustomSampler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Profiling/zzzz__Sampler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomSampler)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Profiling {
class CustomSampler_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Profiling {
class CustomSampler_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Profiling::CustomSampler);
MARK_REF_PTR_T(::UnityEngine::Profiling::CustomSampler_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.CustomSampler/BindingsMarshaller
class CORDL_TYPE CustomSampler_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x68c7eb0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Profiling::CustomSampler* customSampler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomSampler_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomSampler_BindingsMarshaller(CustomSampler_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomSampler_BindingsMarshaller(CustomSampler_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::CustomSampler_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Profiling
// Dependencies UnityEngine.Profiling.Sampler
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.CustomSampler
class CORDL_TYPE CustomSampler : public ::UnityEngine::Profiling::Sampler {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Profiling::CustomSampler_BindingsMarshaller;

  /// @brief Field s_InvalidCustomSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvalidCustomSampler, put = setStaticF_s_InvalidCustomSampler)) ::UnityEngine::Profiling::CustomSampler* s_InvalidCustomSampler;

  /// @brief Method Create, addr 0x68c7da4, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Profiling::CustomSampler* Create(::StringW name, bool collectGpuData);

  static inline ::UnityEngine::Profiling::CustomSampler* New_ctor();

  static inline ::UnityEngine::Profiling::CustomSampler* New_ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x68c7ce8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x68c7d40, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::Profiling::CustomSampler* getStaticF_s_InvalidCustomSampler();

  static inline void setStaticF_s_InvalidCustomSampler(::UnityEngine::Profiling::CustomSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomSampler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomSampler(CustomSampler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomSampler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomSampler(CustomSampler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::CustomSampler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Profiling
NEED_NO_BOX(::UnityEngine::Profiling::CustomSampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::CustomSampler*, "UnityEngine.Profiling", "CustomSampler");
NEED_NO_BOX(::UnityEngine::Profiling::CustomSampler_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::CustomSampler_BindingsMarshaller*, "UnityEngine.Profiling", "CustomSampler/BindingsMarshaller");
