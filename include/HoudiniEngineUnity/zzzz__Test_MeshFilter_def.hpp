#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_MeshFilter)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_MeshFilter;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_MeshFilter);
// Type: HoudiniEngineUnity::Test_MeshFilter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9922))
// CS Name: ::HoudiniEngineUnity::Test_MeshFilter*
class CORDL_TYPE Test_MeshFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::MeshFilter* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshFilter*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_MeshFilter__() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshFilter*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_MeshFilter__() noexcept;

  constexpr ::UnityEngine::MeshFilter*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::MeshFilter* value);

  static inline ::HoudiniEngineUnity::Test_MeshFilter* New_ctor(::UnityEngine::MeshFilter* self);

  /// @brief Method .ctor, addr 0x21e6400, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::MeshFilter* self);

  /// @brief Method IsNull, addr 0x21e6428, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo, addr 0x21e6488, size 0x1a0, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_MeshFilter* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_MeshFilter(Test_MeshFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_MeshFilter(Test_MeshFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_MeshFilter();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_MeshFilter, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_MeshFilter, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshFilter*, "HoudiniEngineUnity", "Test_MeshFilter");
