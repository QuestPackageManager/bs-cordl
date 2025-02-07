#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_ObjectInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_ObjectInfo)
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_ObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_ObjectInfo);
// Dependencies HoudiniEngineUnity.HAPI_ObjectInfo, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_HAPI_ObjectInfo
class CORDL_TYPE Test_HAPI_ObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x1c
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::HoudiniEngineUnity::HAPI_ObjectInfo self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9be14, size 0x1b8, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ObjectInfo* other);

  static inline ::HoudiniEngineUnity::Test_HAPI_ObjectInfo* New_ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self);

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo const& __cordl_internal_get_self() const;

  constexpr ::HoudiniEngineUnity::HAPI_ObjectInfo& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::HoudiniEngineUnity::HAPI_ObjectInfo value);

  /// @brief Method .ctor, addr 0x3a9bdd8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::HoudiniEngineUnity::HAPI_ObjectInfo self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_ObjectInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_ObjectInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_ObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_ObjectInfo(Test_HAPI_ObjectInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11878 };

  /// @brief Field self, offset: 0x10, size: 0x1c, def value: None
  ::HoudiniEngineUnity::HAPI_ObjectInfo ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_HAPI_ObjectInfo, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_ObjectInfo, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_ObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_ObjectInfo*, "HoudiniEngineUnity", "Test_HAPI_ObjectInfo");
