#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneThreadContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::StandaloneThreadContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandaloneThreadContext*, "", "StandaloneThreadContext");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneThreadContext
class CORDL_TYPE StandaloneThreadContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::GlobalNamespace::StandaloneThreadContext* instance;

  /// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunner"
  constexpr operator ::GlobalNamespace::IStandaloneThreadRunner*() noexcept;

  static inline ::GlobalNamespace::StandaloneThreadContext* New_ctor();

  /// @brief Method Run, addr 0x333fa44, size 0x4, virtual true, abstract: false, final true
  inline void Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable);

  /// @brief Method .ctor, addr 0x333fa48, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::StandaloneThreadContext) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
