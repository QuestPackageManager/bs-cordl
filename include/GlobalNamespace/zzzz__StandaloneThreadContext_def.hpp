#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneThreadContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StandaloneThreadContext)
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneThreadContext;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandaloneThreadContext);
// Type: ::StandaloneThreadContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandaloneThreadContext*
class CORDL_TYPE StandaloneThreadContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::GlobalNamespace::StandaloneThreadContext* instance;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunner"
  constexpr operator ::GlobalNamespace::IStandaloneThreadRunner*() noexcept;

  static inline ::GlobalNamespace::StandaloneThreadContext* New_ctor();

  /// @brief Method Run, addr 0x10ca6cc, size 0x4, virtual true, abstract: false, final true
  inline void Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable);

  /// @brief Method .ctor, addr 0x10ca6d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::StandaloneThreadContext* getStaticF_instance();

  /// @brief Convert to "::GlobalNamespace::IStandaloneThreadRunner"
  constexpr ::GlobalNamespace::IStandaloneThreadRunner* i___GlobalNamespace__IStandaloneThreadRunner() noexcept;

  static inline void setStaticF_instance(::GlobalNamespace::StandaloneThreadContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandaloneThreadContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandaloneThreadContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandaloneThreadContext(StandaloneThreadContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandaloneThreadContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandaloneThreadContext(StandaloneThreadContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandaloneThreadContext, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandaloneThreadContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneThreadContext*, "", "StandaloneThreadContext");
