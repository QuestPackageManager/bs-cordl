#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/RemoteProviderException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RemoteProviderException)
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class RemoteProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
// Dependencies UnityEngine.ResourceManagement.Exceptions.ProviderException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Exceptions.RemoteProviderException
class CORDL_TYPE RemoteProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ProviderException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_WebRequestResult)) ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* WebRequestResult;

  /// @brief Field <WebRequestResult>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__WebRequestResult_k__BackingField,
                      put = __cordl_internal_set__WebRequestResult_k__BackingField)) ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* _WebRequestResult_k__BackingField;

  static inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException* New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                 ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                                                                                                 ::System::Exception* innerException);

  /// @brief Method ToString, addr 0x4792b24, size 0x174, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* const& __cordl_internal_get__WebRequestResult_k__BackingField() const;

  constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*& __cordl_internal_get__WebRequestResult_k__BackingField();

  constexpr void __cordl_internal_set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* value);

  /// @brief Method .ctor, addr 0x4792ae4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                    ::System::Exception* innerException);

  /// @brief Method get_Message, addr 0x4792b10, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_WebRequestResult, addr 0x4792b1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* get_WebRequestResult();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteProviderException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteProviderException(RemoteProviderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteProviderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteProviderException(RemoteProviderException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15612 };

  /// @brief Field <WebRequestResult>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* ____WebRequestResult_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, ____WebRequestResult_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*, "UnityEngine.ResourceManagement.Exceptions", "RemoteProviderException");
