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
// Type: UnityEngine.ResourceManagement.Exceptions::RemoteProviderException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::RemoteProviderException*
class CORDL_TYPE RemoteProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ProviderException {
public:
  // Declarations
  __declspec(property(get = get_Message))::StringW Message;

  __declspec(property(get = get_WebRequestResult))::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* WebRequestResult;

  /// @brief Field <WebRequestResult>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__WebRequestResult_k__BackingField,
                      put = __cordl_internal_set__WebRequestResult_k__BackingField))::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* _WebRequestResult_k__BackingField;

  static inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException* New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                                 ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                                                                                                 ::System::Exception* innerException);

  /// @brief Method ToString, addr 0x333e784, size 0x174, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*& __cordl_internal_get__WebRequestResult_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*> const& __cordl_internal_get__WebRequestResult_k__BackingField() const;

  constexpr void __cordl_internal_set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* value);

  /// @brief Method .ctor, addr 0x333e744, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                    ::System::Exception* innerException);

  /// @brief Method get_Message, addr 0x333e770, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_WebRequestResult, addr 0x333e77c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <WebRequestResult>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* ____WebRequestResult_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException, ____WebRequestResult_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*, "UnityEngine.ResourceManagement.Exceptions", "RemoteProviderException");
