#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignalCopyBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
// Forward declare root types
namespace Zenject {
class SignalCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalCopyBinder);
// Type: Zenject::SignalCopyBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10655))
// CS Name: ::Zenject::SignalCopyBinder*
class CORDL_TYPE SignalCopyBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindInfos, offset 0x10, size 0x8
  __declspec(property(get = __get__bindInfos, put = __set__bindInfos))::System::Collections::Generic::List_1<::Zenject::BindInfo*>* _bindInfos;

  constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*& __get__bindInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindInfo*>*> const& __get__bindInfos() const;

  constexpr void __set__bindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo*>* value);

  static inline ::Zenject::SignalCopyBinder* New_ctor();

  /// @brief Method .ctor, addr 0x2ec24c8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::SignalCopyBinder* New_ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method .ctor, addr 0x2ec2548, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo);

  /// @brief Method AddCopyBindInfo, addr 0x2ec2640, size 0xa8, virtual false, abstract: false, final false
  inline void AddCopyBindInfo(::Zenject::BindInfo* bindInfo);

  /// @brief Method CopyIntoAllSubContainers, addr 0x2ec26e8, size 0x8, virtual false, abstract: false, final false
  inline void CopyIntoAllSubContainers();

  /// @brief Method CopyIntoDirectSubContainers, addr 0x2ec2784, size 0x8, virtual false, abstract: false, final false
  inline void CopyIntoDirectSubContainers();

  /// @brief Method MoveIntoAllSubContainers, addr 0x2ec278c, size 0x8, virtual false, abstract: false, final false
  inline void MoveIntoAllSubContainers();

  /// @brief Method MoveIntoDirectSubContainers, addr 0x2ec2794, size 0x8, virtual false, abstract: false, final false
  inline void MoveIntoDirectSubContainers();

  /// @brief Method SetInheritanceMethod, addr 0x2ec26f0, size 0x94, virtual false, abstract: false, final false
  inline void SetInheritanceMethod(::Zenject::BindingInheritanceMethods method);

  // Ctor Parameters [CppParam { name: "", ty: "SignalCopyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalCopyBinder(SignalCopyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalCopyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalCopyBinder(SignalCopyBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalCopyBinder();

public:
  /// @brief Field _bindInfos, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* ____bindInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalCopyBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalCopyBinder, ____bindInfos) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalCopyBinder*, "Zenject", "SignalCopyBinder");
