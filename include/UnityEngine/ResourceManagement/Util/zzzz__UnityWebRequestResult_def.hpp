#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequestResult)
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult);
// Type: UnityEngine.ResourceManagement.Util::UnityWebRequestResult
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15578))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13987))
// CS Name: ::UnityEngine.ResourceManagement.Util::UnityWebRequestResult*
class CORDL_TYPE UnityWebRequestResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Error>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Error_k__BackingField, put = __set__Error_k__BackingField))::StringW _Error_k__BackingField;

  /// @brief Field <ResponseCode>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ResponseCode_k__BackingField, put = __set__ResponseCode_k__BackingField)) int64_t _ResponseCode_k__BackingField;

  /// @brief Field <Result>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__Result_k__BackingField, put = __set__Result_k__BackingField))::UnityEngine::Networking::__UnityWebRequest__Result _Result_k__BackingField;

  /// @brief Field <Method>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Method_k__BackingField, put = __set__Method_k__BackingField))::StringW _Method_k__BackingField;

  /// @brief Field <Url>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__Url_k__BackingField, put = __set__Url_k__BackingField))::StringW _Url_k__BackingField;

  __declspec(property(get = get_Error, put = set_Error))::StringW Error;

  __declspec(property(get = get_ResponseCode)) int64_t ResponseCode;

  __declspec(property(get = get_Result))::UnityEngine::Networking::__UnityWebRequest__Result Result;

  __declspec(property(get = get_Method))::StringW Method;

  __declspec(property(get = get_Url))::StringW Url;

  constexpr ::StringW& __get__Error_k__BackingField();

  constexpr ::StringW const& __get__Error_k__BackingField() const;

  constexpr void __set__Error_k__BackingField(::StringW value);

  constexpr int64_t& __get__ResponseCode_k__BackingField();

  constexpr int64_t const& __get__ResponseCode_k__BackingField() const;

  constexpr void __set__ResponseCode_k__BackingField(int64_t value);

  constexpr ::UnityEngine::Networking::__UnityWebRequest__Result& __get__Result_k__BackingField();

  constexpr ::UnityEngine::Networking::__UnityWebRequest__Result const& __get__Result_k__BackingField() const;

  constexpr void __set__Result_k__BackingField(::UnityEngine::Networking::__UnityWebRequest__Result value);

  constexpr ::StringW& __get__Method_k__BackingField();

  constexpr ::StringW const& __get__Method_k__BackingField() const;

  constexpr void __set__Method_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Url_k__BackingField();

  constexpr ::StringW const& __get__Url_k__BackingField() const;

  constexpr void __set__Url_k__BackingField(::StringW value);

  static inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* New_ctor(::UnityEngine::Networking::UnityWebRequest* request);

  /// @brief Method .ctor, addr 0x2bd32a8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Networking::UnityWebRequest* request);

  /// @brief Method ToString, addr 0x2bd33b8, size 0x180, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Error, addr 0x2bd3538, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Error();

  /// @brief Method set_Error, addr 0x2bd3540, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::StringW value);

  /// @brief Method get_ResponseCode, addr 0x2bd3548, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_ResponseCode();

  /// @brief Method get_Result, addr 0x2bd3550, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Networking::__UnityWebRequest__Result get_Result();

  /// @brief Method get_Method, addr 0x2bd3558, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Method();

  /// @brief Method get_Url, addr 0x2bd3560, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Url();

  /// @brief Method ShouldRetryDownloadError, addr 0x2bd3568, size 0x2d0, virtual false, abstract: false, final false
  inline bool ShouldRetryDownloadError();

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityWebRequestResult(UnityWebRequestResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityWebRequestResult(UnityWebRequestResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityWebRequestResult();

public:
  /// @brief Field <Error>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Error_k__BackingField;

  /// @brief Field <ResponseCode>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____ResponseCode_k__BackingField;

  /// @brief Field <Result>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Networking::__UnityWebRequest__Result ____Result_k__BackingField;

  /// @brief Field <Method>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Method_k__BackingField;

  /// @brief Field <Url>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Url_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, ____Error_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, ____ResponseCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, ____Result_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, ____Method_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult, ____Url_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, "UnityEngine.ResourceManagement.Util", "UnityWebRequestResult");
