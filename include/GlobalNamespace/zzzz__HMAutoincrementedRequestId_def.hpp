#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMAutoincrementedRequestId)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class HMAutoincrementedRequestId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HMAutoincrementedRequestId);
// Type: ::HMAutoincrementedRequestId
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14371))
// CS Name: ::HMAutoincrementedRequestId*
class CORDL_TYPE HMAutoincrementedRequestId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _requestId, offset 0x10, size 0x8
  __declspec(property(get = __get__requestId, put = __set__requestId)) uint64_t _requestId;

  /// @brief Field _nextRequestId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__nextRequestId, put = setStaticF__nextRequestId)) uint64_t _nextRequestId;

  __declspec(property(get = get_RequestId)) uint64_t RequestId;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>*() noexcept;

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::HMAutoincrementedRequestId*>* i___System__IEquatable_1___GlobalNamespace__HMAutoincrementedRequestId__() noexcept;

  constexpr uint64_t& __get__requestId();

  constexpr uint64_t const& __get__requestId() const;

  constexpr void __set__requestId(uint64_t value);

  static inline void setStaticF__nextRequestId(uint64_t value);

  static inline uint64_t getStaticF__nextRequestId();

  /// @brief Method get_RequestId, addr 0x20f30bc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_RequestId();

  static inline ::GlobalNamespace::HMAutoincrementedRequestId* New_ctor();

  /// @brief Method .ctor, addr 0x20f2eec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Equals, addr 0x20f30c4, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::HMAutoincrementedRequestId* obj);

  /// @brief Method Equals, addr 0x20f30e4, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x20f319c, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "HMAutoincrementedRequestId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMAutoincrementedRequestId(HMAutoincrementedRequestId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMAutoincrementedRequestId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMAutoincrementedRequestId(HMAutoincrementedRequestId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMAutoincrementedRequestId();

public:
  /// @brief Field _requestId, offset: 0x10, size: 0x8, def value: None
  uint64_t ____requestId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HMAutoincrementedRequestId, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HMAutoincrementedRequestId, ____requestId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HMAutoincrementedRequestId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HMAutoincrementedRequestId*, "", "HMAutoincrementedRequestId");
