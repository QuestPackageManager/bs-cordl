#pragma once
// IWYU pragma private; include "Oculus/Platform/Core.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Core)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class Core;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Core);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Core
class CORDL_TYPE Core : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsPlatformInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsPlatformInitialized, put = setStaticF_IsPlatformInitialized)) bool IsPlatformInitialized;

  /// @brief Field LogMessages, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_LogMessages, put = setStaticF_LogMessages)) bool LogMessages;

  /// @brief Field PlatformUninitializedError, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PlatformUninitializedError, put = setStaticF_PlatformUninitializedError)) ::StringW PlatformUninitializedError;

  /// @brief Method AsyncInitialize, addr 0x3f83ac0, size 0x298, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
  AsyncInitialize(::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions, ::StringW appId);

  /// @brief Method AsyncInitialize, addr 0x3f59020, size 0x31c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);

  /// @brief Method ForceInitialized, addr 0x3f835f8, size 0x5c, virtual false, abstract: false, final false
  static inline void ForceInitialized();

  /// @brief Method GetAppIDFromConfig, addr 0x3f837f4, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW GetAppIDFromConfig();

  /// @brief Method Initialize, addr 0x3f83e70, size 0x374, virtual false, abstract: false, final false
  static inline void Initialize(::StringW appId);

  /// @brief Method IsInitialized, addr 0x3f835a0, size 0x58, virtual false, abstract: false, final false
  static inline bool IsInitialized();

  static inline ::Oculus::Platform::Core* New_ctor();

  /// @brief Method .ctor, addr 0x3f842d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method getAppID, addr 0x3f83654, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW getAppID(::StringW appId);

  static inline bool getStaticF_IsPlatformInitialized();

  static inline bool getStaticF_LogMessages();

  static inline ::StringW getStaticF_PlatformUninitializedError();

  static inline void setStaticF_IsPlatformInitialized(bool value);

  static inline void setStaticF_LogMessages(bool value);

  static inline void setStaticF_PlatformUninitializedError(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Core();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Core(Core&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Core(Core const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Core, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Core);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Core*, "Oculus.Platform", "Core");
