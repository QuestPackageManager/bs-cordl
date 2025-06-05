#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HoudiniEngineError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_HoudiniEngineError)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniEngineError;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniEngineError);
// Dependencies System.Exception
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniEngineError
class CORDL_TYPE HEU_HoudiniEngineError : public ::System::Exception {
public:
  // Declarations
  /// @brief Field _errorMsg, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__errorMsg, put = __cordl_internal_set__errorMsg)) ::StringW _errorMsg;

  static inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* New_ctor();

  static inline ::HoudiniEngineUnity::HEU_HoudiniEngineError* New_ctor(::StringW errorMsg);

  /// @brief Method ToString, addr 0x3a3fcfc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__errorMsg() const;

  constexpr ::StringW& __cordl_internal_get__errorMsg();

  constexpr void __cordl_internal_set__errorMsg(::StringW value);

  /// @brief Method .ctor, addr 0x3a3fbf8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3a3fc74, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW errorMsg);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniEngineError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniEngineError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniEngineError(HEU_HoudiniEngineError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniEngineError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniEngineError(HEU_HoudiniEngineError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11660 };

  /// @brief Field _errorMsg, offset: 0x90, size: 0x8, def value: None
  ::StringW ____errorMsg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniEngineError, ____errorMsg) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniEngineError, 0x98>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniEngineError);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniEngineError*, "HoudiniEngineUnity", "HEU_HoudiniEngineError");
