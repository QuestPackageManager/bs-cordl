#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_AttributeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_AttributeInfo)
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_AttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_AttributeInfo);
// Dependencies HoudiniEngineUnity.HAPI_AttributeInfo, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_HAPI_AttributeInfo
class CORDL_TYPE Test_HAPI_AttributeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::HoudiniEngineUnity::HAPI_AttributeInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3aa5198, size 0xec, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AttributeInfo* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_AttributeInfo* New_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self);

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_AttributeInfo value);

  /// @brief Method .ctor, addr 0x3aa5164, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_AttributeInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_AttributeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_AttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_AttributeInfo(Test_HAPI_AttributeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11885 };

  /// @brief Field self, offset: 0x10, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_AttributeInfo, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_AttributeInfo, 0x38>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_AttributeInfo*, "HoudiniEngineUnity", "Test_HAPI_AttributeInfo");
