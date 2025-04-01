#pragma once
// IWYU pragma private; include "GlobalNamespace/NoPlatformInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__IPlatformInit_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoPlatformInit)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPlatformInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoPlatformInit);
// Dependencies BeatSaber.Init.IPlatformInit, System.Object, Zenject.IInitializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoPlatformInit
class CORDL_TYPE NoPlatformInit : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::BeatSaber::Init::IPlatformInit"
  constexpr operator ::BeatSaber::Init::IPlatformInit*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method GetAppVersionAsync, addr 0x407a9b0, size 0x88, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method Initialize, addr 0x407a93c, size 0x4, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x407a948, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync();

  static inline ::GlobalNamespace::NoPlatformInit* New_ctor();

  /// @brief Method .ctor, addr 0x407aa38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInitialized, addr 0x407a940, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsInitialized();

  /// @brief Convert to "::BeatSaber::Init::IPlatformInit"
  constexpr ::BeatSaber::Init::IPlatformInit* i___BeatSaber__Init__IPlatformInit() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPlatformInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoPlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPlatformInit(NoPlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPlatformInit(NoPlatformInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoPlatformInit, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoPlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPlatformInit*, "", "NoPlatformInit");
