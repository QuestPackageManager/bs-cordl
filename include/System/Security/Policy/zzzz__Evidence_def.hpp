#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Evidence)
namespace System {
class Array;
}
namespace System::Security::Policy {
class __Evidence__EvidenceEnumerator;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace System::Security::Policy {
class Evidence;
}
namespace System::Security::Policy {
class __Evidence__EvidenceEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Policy::Evidence);
MARK_REF_PTR_T(::System::Security::Policy::__Evidence__EvidenceEnumerator);
// Type: ::EvidenceEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Policy {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2900))
// CS Name: ::Evidence::EvidenceEnumerator*
class CORDL_TYPE __Evidence__EvidenceEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentEnum, offset 0x10, size 0x8
  __declspec(property(get = __get_currentEnum, put = __set_currentEnum))::System::Collections::IEnumerator* currentEnum;

  /// @brief Field hostEnum, offset 0x18, size 0x8
  __declspec(property(get = __get_hostEnum, put = __set_hostEnum))::System::Collections::IEnumerator* hostEnum;

  /// @brief Field assemblyEnum, offset 0x20, size 0x8
  __declspec(property(get = __get_assemblyEnum, put = __set_assemblyEnum))::System::Collections::IEnumerator* assemblyEnum;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::IEnumerator*& __get_currentEnum();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_currentEnum() const;

  constexpr void __set_currentEnum(::System::Collections::IEnumerator* value);

  constexpr ::System::Collections::IEnumerator*& __get_hostEnum();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_hostEnum() const;

  constexpr void __set_hostEnum(::System::Collections::IEnumerator* value);

  constexpr ::System::Collections::IEnumerator*& __get_assemblyEnum();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_assemblyEnum() const;

  constexpr void __set_assemblyEnum(::System::Collections::IEnumerator* value);

  static inline ::System::Security::Policy::__Evidence__EvidenceEnumerator* New_ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum);

  /// @brief Method .ctor addr 0x2456798 size 0x30 virtual false final false
  inline void _ctor(::System::Collections::IEnumerator* hostenum, ::System::Collections::IEnumerator* assemblyenum);

  /// @brief Method MoveNext addr 0x24567c8 size 0x128 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x24568f0 size 0x120 virtual true final true
  inline void Reset();

  /// @brief Method get_Current addr 0x2456a10 size 0xa4 virtual true final true
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Evidence__EvidenceEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Evidence__EvidenceEnumerator(__Evidence__EvidenceEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Evidence__EvidenceEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Evidence__EvidenceEnumerator(__Evidence__EvidenceEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Evidence__EvidenceEnumerator();

public:
  /// @brief Field currentEnum, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___currentEnum;

  /// @brief Field hostEnum, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___hostEnum;

  /// @brief Field assemblyEnum, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___assemblyEnum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Policy::__Evidence__EvidenceEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Security::Policy
// Type: System.Security.Policy::Evidence
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Policy {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2901))
// CS Name: ::System.Security.Policy::Evidence*
class CORDL_TYPE Evidence : public ::System::Object {
public:
  // Declarations
  using EvidenceEnumerator = ::System::Security::Policy::__Evidence__EvidenceEnumerator;

  /// @brief Field _locked, offset 0x10, size 0x1
  __declspec(property(get = __get__locked, put = __set__locked)) bool _locked;

  /// @brief Field hostEvidenceList, offset 0x18, size 0x8
  __declspec(property(get = __get_hostEvidenceList, put = __set_hostEvidenceList))::System::Collections::ArrayList* hostEvidenceList;

  /// @brief Field assemblyEvidenceList, offset 0x20, size 0x8
  __declspec(property(get = __get_assemblyEvidenceList, put = __set_assemblyEvidenceList))::System::Collections::ArrayList* assemblyEvidenceList;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr bool& __get__locked();

  constexpr bool const& __get__locked() const;

  constexpr void __set__locked(bool value);

  constexpr ::System::Collections::ArrayList*& __get_hostEvidenceList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_hostEvidenceList() const;

  constexpr void __set_hostEvidenceList(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_assemblyEvidenceList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_assemblyEvidenceList() const;

  constexpr void __set_assemblyEvidenceList(::System::Collections::ArrayList* value);

  static inline ::System::Security::Policy::Evidence* New_ctor();

  /// @brief Method .ctor addr 0x24565b4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Count addr 0x24565bc size 0x5c virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized addr 0x2456618 size 0x8 virtual true final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x2456620 size 0x4 virtual true final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method CopyTo addr 0x2456624 size 0xc4 virtual true final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator addr 0x24566e8 size 0xb0 virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Evidence(Evidence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Evidence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Evidence(Evidence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Evidence();

public:
  /// @brief Field _locked, offset: 0x10, size: 0x1, def value: None
  bool ____locked;

  /// @brief Field hostEvidenceList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___hostEvidenceList;

  /// @brief Field assemblyEvidenceList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___assemblyEvidenceList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Policy::Evidence, 0x28>, "Size mismatch!");

} // namespace System::Security::Policy
NEED_NO_BOX(::System::Security::Policy::Evidence);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Policy::Evidence*, "System.Security.Policy", "Evidence");
NEED_NO_BOX(::System::Security::Policy::__Evidence__EvidenceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Policy::__Evidence__EvidenceEnumerator*, "System.Security.Policy", "Evidence/EvidenceEnumerator");
