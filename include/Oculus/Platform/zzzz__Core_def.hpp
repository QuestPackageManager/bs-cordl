#pragma once
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
// Type: Oculus.Platform::Core
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13348))
// CS Name: ::Oculus.Platform::Core*
class CORDL_TYPE Core : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsPlatformInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsPlatformInitialized, put = setStaticF_IsPlatformInitialized)) bool IsPlatformInitialized;

  /// @brief Field LogMessages, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_LogMessages, put = setStaticF_LogMessages)) bool LogMessages;

  /// @brief Field PlatformUninitializedError, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PlatformUninitializedError, put = setStaticF_PlatformUninitializedError))::StringW PlatformUninitializedError;

  static inline void setStaticF_IsPlatformInitialized(bool value);

  static inline bool getStaticF_IsPlatformInitialized();

  static inline void setStaticF_LogMessages(bool value);

  static inline bool getStaticF_LogMessages();

  static inline void setStaticF_PlatformUninitializedError(::StringW value);

  static inline ::StringW getStaticF_PlatformUninitializedError();

  /// @brief Method IsInitialized, addr 0x26f4d30, size 0x58, virtual false, abstract: false, final false
  static inline bool IsInitialized();

  /// @brief Method ForceInitialized, addr 0x26f4d88, size 0x5c, virtual false, abstract: false, final false
  static inline void ForceInitialized();

  /// @brief Method getAppID, addr 0x26f4de4, size 0x1a4, virtual false, abstract: false, final false
  static inline ::StringW getAppID(::StringW appId);

  /// @brief Method AsyncInitialize, addr 0x26c9d88, size 0x2c0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);

  /// @brief Method AsyncInitialize, addr 0x26f525c, size 0x254, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
  AsyncInitialize(::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions, ::StringW appId);

  /// @brief Method Initialize, addr 0x26f55f8, size 0x320, virtual false, abstract: false, final false
  static inline void Initialize(::StringW appId);

  /// @brief Method GetAppIDFromConfig, addr 0x26f4f88, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetAppIDFromConfig();

  static inline ::Oculus::Platform::Core* New_ctor();

  /// @brief Method .ctor, addr 0x26f5a40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Core(Core&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Core", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Core(Core const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Core();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Core, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Core);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Core*, "Oculus.Platform", "Core");
